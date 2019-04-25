#include <iostream>

int main(){
  std::cout << "hello world" << std::endl;

  // i is an object of type int and its value is 0;
  int i = 0;

  // r1 is a reference of object i;
  int &r1 = i;

  std::cout << "the object i has value: " << i << std::endl;
  std::cout << "the reference r1 to object i has value: " << r1 << std::endl;
  ++i;
  std::cout << "if I call ++i, now r1 has value: " << r1 << std::endl;
  ++r1;
  std::cout << "if I call ++r1, now r1 has value: " << r1 << " and i has value: " << i << std::endl;

  r1 = 5;
  std::cout << "if I assign the value 5 to r1, r1 is " << r1 << " and i is " << i << std::endl;

  return 0;
}
