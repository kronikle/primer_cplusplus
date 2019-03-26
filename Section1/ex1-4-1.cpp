#include <iostream>

int main() {
  int sum = 0;
  int num = 50;
  while(num <=100){
    sum += num;
    ++num;
  }
  std::cout << "the sum of numbers from 500 to 100 is " << sum << std::endl;

  std::cout << "now I will count backward from 10 to 0:" << std::endl;
  int counter = 10;
  while (counter >= 0){
    std::cout << counter << std::endl;
    --counter;	    
  }

      std::cout<< "\nnow insert two numbers: " << std::endl;

    int yourCounter= 0;
    int end= 0;
    std::cin >> yourCounter >> end;

    std::cout <<"\n" << std::endl;
    while(yourCounter <= end){
      std::cout << yourCounter << std::endl;
      ++yourCounter;
    }
					 
      
  
  return 0;
}
