#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class PigPlayer{
  public:
    PigPlayer();
    int getValue();
    int turnTotal();
    int realTotal();
    void roll();
    void hold();
    void reset();
    void stop();
  private:
    int dieTotal = 0;
    int turnTot = 0;
    int totalScore = 0;
};

PigPlayer::PigPlayer(){
  totalScore = 0;
}

void PigPlayer::roll(){
  dieTotal = rand() % 6 + 1;
  turnTot += dieTotal;
}

void PigPlayer::hold(){
  totalScore = turnTot;
}

int PigPlayer::turnTotal(){
  return turnTot;
}

int PigPlayer::getValue(){
  return dieTotal;
}

int PigPlayer::realTotal(){
  return totalScore;
}

void PigPlayer::reset(){
  turnTot = 0;
}

void PigPlayer::stop(){
  dieTotal = 1;
}
