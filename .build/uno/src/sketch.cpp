#include <Arduino.h>
void setup();
void loop();
boolean notAllPlayersPressed();
void checkForReaction(int i);
void resetReactions();
void resetScores();
void checkForPenalties();
void printScores();
void printWinner();
int winningPlayer();
void sendToSusan(int winner);
#line 1 "src/sketch.ino"
#include "ButtonPlayer.h"
#include "ReactionPlayer.h"
#include "Wire.h"
#include "EasyTransferI2C.h"

//create object
EasyTransferI2C ET;

struct SEND_DATA_STRUCTURE{
  //put your variable definitions here for the data you want to send
  //THIS MUST BE EXACTLY THE SAME ON THE OTHER ARDUINO
  int winner;
};

//give a name to the group of data 
SEND_DATA_STRUCTURE mydata;

//define slave i2c address
#define I2C_SLAVE_ADDRESS 9

ReactionPlayer player1(7, 1);
ReactionPlayer player2(6, 2);
ReactionPlayer player3(5, 3);
ReactionPlayer player4(4, 4);
ReactionPlayer player5(3, 5);
ReactionPlayer player6(2, 6);

ReactionPlayer players[] = {
  player1, player2, player3, player4, player5, player6};
const int playerCount = 6;

unsigned int last  = millis();
int randomInterval = 2000 + random(3000);
int rounds         = 0;

const int totalRounds = 6;

void setup()
{
  Wire.begin();
  //start the library, pass in the data details and the name of the serial port.
  // Can be Serial, Serial1, Serial2, etc.
  ET.begin(details(mydata), &Wire);

  Serial.begin(9600);
  Serial.println("game_start");
}

void loop()
{
  if (millis() - last > randomInterval) {
    Serial.print("round_start - ");
    Serial.println(rounds);

    while (notAllPlayersPressed()) {
      for(int i = 0; i < playerCount; i++) {
        checkForReaction(i);
      }
    }

    printScores();
    rounds++;
    last           = millis();
    randomInterval = 2000 + random(2000);
    resetReactions();
  }
  else {
    checkForPenalties();
  }

  if (rounds >= totalRounds) {

    // Don't print this, is inferred when "winning_team" is printed
    // Serial.println("game_end");
    printWinner();

    resetReactions();

    Serial.println("Press to restart!");
    while(true) {
      if (players[0].isPressed()) {
        asm volatile ("  jmp 0");
      }
    }
  }
}

boolean notAllPlayersPressed()
{
  for(int i = 0; i < playerCount; i++) {
    if (players[i].reacted() == false) {
      return true;
    }
  }
  return false;
}

void checkForReaction(int i)
{
  if (players[i].isPressed() && players[i].reacted() == false) {
    // Not using reaction times at the moment
    // Serial.print("Reaction: ");
    // Serial.print(players[i].number());
    // Serial.print(": ");
    // Serial.println((millis() - last - randomInterval) / 1000.0);
    players[i].increment(millis() - last - randomInterval);
    players[i].setReaction(true);
  }
}

void resetReactions()
{
  for(int i = 0; i < playerCount; i++) {
    // this returns true later if not called, wtf
    players[i].isPressed();
    players[i].setReaction(false);
  }
}

void resetScores()
{
  for(int i = 0; i < playerCount; i++) {
    players[i].increment(0 - players[i].score());
  }
}

void checkForPenalties()
{
  for(int i = 0; i < playerCount; i++) {
    if (players[i].isPressed()) {
      // Not using penalties at the moment
      // Serial.print("Penalty: ");
      // Serial.println(players[i].number());
      players[i].increment(200);
    }
  }
}

void printScores()
{
  Serial.print("round_over - ");
  Serial.println(rounds);
  for(int i = 0; i < playerCount; i++) {
    Serial.print("individual_score - ");
    // Don't need the player numbers since they come in order
    // Serial.print(players[i].number());
    // Serial.print(" - ");
    Serial.println(players[i].score() / 1000.0);
  }

  // Not using team scores at the moment
  // for(int i = 0; i < 3; i++) {
  //   Serial.print("TeamScore: ");
  //   Serial.print(i + 1);
  //   Serial.print(": ");
  //   Serial.println((players[2*i].score() + players[(2*i) + 1].score()) / 1000.0);
  // }
}

void printWinner()
{
  int winningTeam = winningPlayer();
  Serial.print("winning_team - ");
  Serial.println(winningTeam);

  sendToSusan(winningTeam);
}

int winningPlayer()
{
  int min    = players[0].score() + players[1].score();
  int winner = 1;

  for(int i = 0; i < 3; i++) {
    if ((players[2*i].score() + players[(2*i) + 1].score()) < min) {
      min    = players[2*i].score() + players[(2*i) + 1].score();
      winner = i + 1;
    }
  }
  return winner;
}

void sendToSusan(int winner)
{
  mydata.winner = winner;
  ET.sendData(I2C_SLAVE_ADDRESS);
}
