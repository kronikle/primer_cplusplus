#include <iostream>

int main(){
  const int ci = 1024;
  const int &r1 = ci;
  std::cout << "const variables cannot change so const ci and his ref ri are: " << r1 << std::endl;

  //  r1 = 42;

  std::cout << "myVar is an int nonconst = 43 and I create a const ref" << std::endl;

  int myVar = 43;
  const int &myRef = myVar;
  std::cout << "myVar: " << myVar << " | myRef: " << myRef << std::endl;

  std::cout << "now I can modify just myVar but not the reference. Even if changing myVar, myRef const changes too" << std::endl;

  ++myVar;
  //  ++myRef; // error! myRef is const!
  std::cout << "myVar: " << myVar << " | myRef: " << myRef << std::endl;

  std::cout << "pointers can point to a const and they can't change the object they point to; they have to be const too." <<std::endl;

  const int var = 25;
  const int *pVar = &var;

  std::cout << "var = " << var << " pVar = " << *pVar << std::endl;
  pVar = &myVar;
  std::cout << "pointer can point to another object i.e. myVar " << std::endl;
  //  *pVar = 28; // error
  std::cout << "but if I use *const after type declaration, this object became a pointer that constantly point to that object\nso this pointer cannot point to another object anymore. like:\n\tconst int *const cpVar = &var;" << std::endl;
  const int *const cpVar = &var;
  //  cpVar = &myVar; // error cpVar cannot change object to point to;
  std::cout << "cpVar = " << *cpVar << " points to var = " << var << std::endl;

  return 0;
}
  
