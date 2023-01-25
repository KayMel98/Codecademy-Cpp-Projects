#include <iostream>
#include <cstdlib>

int main(){
//Output first line to user
std::cout<<"MAGIC 8-BALL:\n\n";

//Generate a random number for 8 Ball output
srand(time(NULL));
int answer=std::rand() % 10;

//If statment outputs answer based on num generated
if (answer==0){
  std::cout<<"It is certain.\n";
} else if(answer==1){
    std::cout<<"It is decidedly so.\n";
} else if(answer==2){
    std::cout<<"Ask again later.\n";
} else if(answer==3){
    std::cout<<"My reply is no.\n";
} else if(answer==4){
    std::cout<<"Outlook not good.\n";
} else if(answer==5){
    std::cout<<"Yes.\n";
} else if(answer==6){
    std::cout<<"Most likely.\n";
} else if(answer==7){
    std::cout<<"Cannot predict now.\n";
} else if(answer==8){
    std::cout<<"As I see it, yes.\n";
} else{
  std::cout<<"Very doubtful.\n";
}

}
