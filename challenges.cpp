#include <cstdlib>
#include <iostream>
#include <random>
#include <ctime>
#include <cmath>

namespace eggdogg{
    int rand(int min, int max){
      return std::rand()%(max-min)+(min);
    }
}

int main(){
    int length;
    std::cout << "Length of rememberance please\n";
    std::cin >> length;
    std::srand(std::time(NULL)*6942069420);
    int string = eggdogg::rand(pow(10,length-1), (pow(10,length)-1));
    std::cout << "test";
    std::cout << string;
}

