#include <iostream>
int main(){
// Declare Initial Variables
int answer1;
int answer2;
int answer3;
std::string dest;
std::string time;
std::string activity;

//Ask User question 1
std::cout<<"Where would you like to go?\n";
std::cout<<"1) The Beach\n";
std::cout<<"2) The Mountain\n";
std::cout<<"Select your answer: ";
std::cin>>answer1;
//set destination var based on answer
if (answer1==1){
  dest="beach";
} else if(answer1==2){
  dest="mountain";
}

//Ask User question 2
std::cout<<"How long would you like to go?\n";
std::cout<<"1) A weekend \n";
std::cout<<"2) A week\n";
std::cout<<"Select your answer: ";
std::cin>>answer2;
//Set time var based on answer
if (answer2==1){
  time="weekend";
} else if(answer2==2){
  time="week";
}

//Question 3 depending on answer to Q1
if (answer1==1){
  std::cout<<"What would you like to do?\n";
  std::cout<<"1) Surf \n";
  std::cout<<"2) Tan \n";
  std::cout<<"Select your answer: ";
  std::cin>>answer3;
  //set activity based on answer
  if (answer3==1){
  activity="surfing";
} else if(answer3==2){
  activity="tanning";
}
} else if(answer1==2){
  std::cout<<"What would you like to do?\n";
  std::cout<<"1) Hike\n";
  std::cout<<"2) Ski\n";
  std::cout<<"Select your answer: ";
  std::cin>>answer3;
  //Set activity based on answer
  if (answer3==1){
  activity ="hiking";
} else if(answer3==2){
  activity="skiing";
}
}
//Output story based on user input

std::cout<<"For vacation this year I went to the " << dest << " for a " << time << " the best part was going " << activity <<".\n";
}
