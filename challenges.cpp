#include <cstdlib>
#include <iostream>
#include <random>
#include <ctime>
#include <cmath>

namespace eggdogg{
    int rand(min, max){
      return std::rand()%(max-min)+(min);
    }
}

int main(){
    int seed;
    int string;
    int length;
    std::cout << "Length of rememberance please\n";
    std::cin >> length;
    std::stoi(length)
    std::srand(std::time(NULL));
    int string = eggdogg::rand(pow(10,length-1), (pow(10,length)-1));
    std::cout << string;
}

