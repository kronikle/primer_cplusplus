#include <iostream>

int main(){
  int i = 0, &r1 = i;
  double d = 0, &r2 = d;

  std::cout << "i: " << i << " | r1: " << r1 << " | d: " << d << " | r2: " << r2 << std::endl;
  
  // (a)
  std::cout <<  "(a) r2 = 3.14159" << std::endl;
  r2 = 3.14159;
  std::cout << "option (a) is valid because r2 is a reference to a double type object" << std::endl;
  std::cout << "i: " << i << " | r1: " << r1 << " | d: " << d << " | r2: " << r2 << std::endl;

  // (b)
  std::cout << "\n(b) r2 = r1" << std::endl;
  r2 = r1;
  std::cout << "option (b) is valid" << std::endl;
  std::cout << "i: " << i << " | r1: " << r1 << " | d: " << d << " | r2: " << r2 << std::endl;

  // (c)
  std::cout << "\n(c) i = r2;" << std::endl;
  i = r2;
  std::cout << "option (c) is valid even if the double value has been truncated" << std::endl;
  std::cout << "i: " << i << " | r1: " << r1 << " | d: " << d << " | r2: " << r2 << std::endl;

  // (d)
  std::cout << "\n(d) r1 = d;" << std::endl;
  std::cout << "option (d) is valid even if the double value has been truncated" << std::endl;
  std::cout << "i: " << i << " | r1: " << r1 << " | d: " << d << " | r2: " << r2 << std::endl;

  return 0;
}
