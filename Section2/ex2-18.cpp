#include <iostream>

int main(){

  int a = 0;
  int b = 1;

  std::cout << "we have a = " << a << " and b = " << b << " int variables" << std::endl;
  int *p1 = &a;

  std::cout << "now I define p1 as pointer of a" << std::endl;
  std::cout << "p1 has value: " << *p1 << std::endl;

  *p1+=4;
  std::cout << "I made pi+= 4 so p1 = " << *p1 << " and a = " << a << std::endl;
  a*=4;
  std::cout << "I made a * 4 so p1 = " << *p1 << " and a = " << a << std::endl;


  p1 = &b;
  std::cout << "I made pi = &b so p1 = " << *p1 << " and a = " << a << " and b = " << b << std::endl;

  std::cout << "so pointer, can point to different objects. the declaration is \n\t*pointer_name = &objectToPoit;\nafter the first declaration, if you want to point to another object you have to call:\n\tpointer_name = &anotherObjectName" << std::endl;
  std::cout << "to access pointer value you have to deference the pointer so:\n\t*pointer_name;" << std::endl;


  return 0;
}
