#include <iostream>

int main(){

  int i = 42;
  int *pi = &i;
  *pi = *pi * *pi;
  std::cout << "now pi is 1764... --> " << *pi << std::endl;

  return 0; 
}
