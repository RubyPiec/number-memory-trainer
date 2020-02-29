#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <random>
#include <chrono>
#include <ctime>
#include <cmath>

namespace eggdogg{
    int rand(int min, int max){
      return std::rand()%(max-min)+(min);
    }
}

int main(){
    int length;
    int answer;
    std::cout << "Length of rememberance please\n";
    std::cin >> length;
    std::srand(std::time(NULL)*6942069420);
    int string = eggdogg::rand(pow(10,length-1), (pow(10,length)-1));
    std::cout << string;
    Sleep(500*length);
    system("CLS");
    std::cout << "Please retype the digits that you just saw:\n";
    std::cin >> answer;
    if(answer == string){
      std::cout << "Congratulations, you have it fully correct!";
    }
    else{
      std::cout << "Wrong!\nThe answer was: " << string << "\nYou answered: " << answer;
    }
}

