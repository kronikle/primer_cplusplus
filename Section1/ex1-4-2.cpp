#include <iostream>

int main(){
  std::cout << "secondo me la somma è 0." << std::endl;

  int sum = 0;
  for (int i = -100; i <= 100; ++i){
    sum += i;
  }
  std::cout << "the end of for loop returns: " << sum << std::endl;
  
  sum = 0;
  int counter = 50;
  // while version
  while (counter <= 100){
    sum+= counter;
    ++counter;
  }
  std::cout << "while version: " << "sum = " << sum << std:: endl;
  

  sum = 0;
  // for version
  for (int i = 50; i <= 100; ++i){
    sum += i;
  }
  std::cout << "for version: " << "sum = " << sum << std:: endl;

  

  std::cout << "\ncountdown\n" << "while version" << std::endl;
  counter = 10;
  while (counter >= 0) {
    std::cout << counter << std::endl;
    --counter;
  }

  std::cout << "\nfor version" << std::endl;
  for (int i = 10; i >= 0; --i){
    std::cout << i << std::endl;
  }

  int input;
  sum = 0;
  for(int i = 0; i <= 3; i++){
  std::cout << "\ninsert a number: "<< std::endl;
  std::cin >> input;
  sum += input;
		
  }
      std::cout << "sum = " << sum << std::endl;
      return 0;
}
