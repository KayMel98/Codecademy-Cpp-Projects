#include <iostream>

int main() {
// Initialize Variables for houses
int gryffindor = 0;
int hufflepuff = 0;
int ravenclaw = 0;
int slytherin = 0; 
int answer1 = 0;
int answer2 = 0;
int answer3 = 0;
int answer4 = 0;

//Output title of quiz to user
std::cout<<"The worting Hat Quiz\n";
//Ask User questions and get input
std::cout<<"Q!) When I'm dead, I want people to remember me as:\n 1) The Good\n 2) The Great\n 3) The Wise\n 4)The Bold\n";
std::cout<<"Enter your answer 1-4\n";
std::cin>>answer1;

//Use if/then statements to sort to house
if (answer1==1){
  hufflepuff=hufflepuff+1;
} else if (answer1==2){
  slytherin=slytherin+1;
} else if (answer1==3){
  ravenclaw=ravenclaw+1;
} else if (answer1==4){
  gryffindor=gryffindor+1;
} else {
  std::cout<<"invalid Input\n";
}

//Question 2 if/then statement
std::cout<<"Q2) Dawn or Dusk?\n 1) Dawn\n 2) Dusk\n";
std::cout<<"Enter your answer 1-2\n";
std::cin>>answer2;
if (answer2==1){
  ravenclaw=ravenclaw+1;
  gryffindor=gryffindor+1;
} else if (answer2==2){
  slytherin=slytherin+1;
  hufflepuff=hufflepuff+1;
} else {
  std::cout<<"invalid Input\n";
}

//Question 3
std::cout<<"Q3) Which kind of instrument most pleases your ear\n 1) The violin\n 2) The trumpet\n 3) The Piano\n 4) The drum\n";
std::cout<<"Enter your answer 1-4\n";
std::cin>>answer3;
if (answer3==1){
  slytherin=slytherin+1;
} else if (answer3==2){
   hufflepuff=hufflepuff+1;
} else if (answer3==3){
  ravenclaw=ravenclaw+1;
} else if (answer3==4){
  gryffindor=gryffindor+1;
} else {
  std::cout<<"invalid Input\n";
}

//Question 4 
std::cout<<"Q4) Which road tempts you the most?\n 1) The wide, sunny, grassy lane\n 2) The narrow, dark, lantern-lit alley\n 3) The twisting, leaf-strewn path through the woods\n 4) The cobbled street lined (ancient buildings)\n";
std::cout<<"Enter your answer 1-4\n";
std::cin>>answer4;
if (answer4==1){
  hufflepuff=hufflepuff+1;
} else if (answer4==2){
   slytherin=slytherin+1;
} else if (answer4==3){
   gryffindor=gryffindor+1;
} else if (answer4==4){
  ravenclaw=ravenclaw+1;
} else {
  std::cout<<"Invalid Input\n";
}
//Find the house with the maximum number of answers to determine house
std::cout << "\nCongrats on being sorted into... ";
int max=0;
std::string house;

if (gryffindor >max){
  max = gryffindor;
  house = "Gryffindor";
} 
if (hufflepuff > max){
  max=hufflepuff;
  house = "Hufflepuff";
}
if (ravenclaw>max){
  max=ravenclaw;
  house="Ravenclaw";
}
if (slytherin > max){
  max = slytherin;
  house = "Slytherin";

std::cout<<house<<"!\n";

}
return 0;
}
