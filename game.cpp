#include <iostream>
#include <ctime>
void defeate(std::string sus){
    std::cout<<"Srorry you lost , pc choise was "<<sus;
}
void win(){
    std::cout<<"Congratulations , you won";
}
void draw(){
    std::cout<<"draw!";
}
void welcome(){
    std::cout<<"************************************** \n";
    std::cout<<"Welcome to ishak rock's paper scissor! \n";
    std::cout<<"************************************** \n";
}
int main(){
    int pc_choice;
    char player_choice;
    srand(time(NULL));
    pc_choice = (rand() %3) + 1;
    std::cout<<pc_choice;
    welcome();
    std::cout<<"Choose one: \n";
    std::cout<<"1/Rock \n";
    std::cout<<"2/Paper \n";
    std::cout<<"3/Scissor \n";
    std::cin>>player_choice;
    switch(player_choice){
        case('1'):
         if(pc_choice == 2){
            defeate("rock");
        }
        else if(pc_choice == 1){
            draw();
        }
        else{
            win();
        }
         break;
        case('2'):
         if(pc_choice == 2){
            draw();
          }
          else if(pc_choice == 1){
              win();
          }
          else{
              defeate("rock");
          }
         break;
        case('3'):
         if(pc_choice == 1){
            win();
         }
         else if(pc_choice ==2){
            defeate("paper");
         }
         else{
            draw();
         }
         break;
        default:
         std::cout<<"Sorry this isn't a valid choice";
         break;
    }
    return 0;
}