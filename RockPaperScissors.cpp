/* This program allows the user to play rock, 
paper, scissors, lizard, spock with the 
program*/

#include <iostream>
#include <stdlib.h>

int main() {

// Live long and prosper
srand(time(NULL));
int computer = rand() % 3+1;
int user =0;

//Start game and get user input of rock, paper or scissors
std::cout<<"=============\n";
std::cout<<"rock paper scissors!\n";
std::cout<<"=============\n";
std::cout<<"1) ✊\n";
std::cout<<"2) ✋\n";
std::cout<<"3) ✌\n";
std::cout<<"shoot! ";

std::cin>>user;

std::cout<<computer;

//Tie scenerio
if (user==computer){
  std::cout<<"Tie!\n";
} 

//User chooses rock
  else if (user == 1) {

    if (computer == 2) {
      std::cout << "you lost! booooo!\n";
    }
    if (computer == 3) {
      std::cout << "you won! woohoo!\n";
    }
  
  //User Chooses paper
  else if (user == 2) {

    if (computer == 1) {
      std::cout << "you won! woohoo!\n";
    }
    if (computer == 3) {
      std::cout << "you lost! boo!\n";
    }
  }
//User Chooses scissors
  else if (user == 3) {

    if (computer == 1) {
      std::cout << "you won! woohoo!\n";
    }
    if (computer == 2) {
      std::cout << "you lost! booooo!\n";
    }
  }

  return 0;
}
}
