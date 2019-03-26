#include <iostream> // I-O library
//  cin /* is an object of type istream*/ >>  value;
//  cout /* is an object of type ostream */ << value << endl;


int main() {
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
  return 0; // 0 terminates function without errors // non-zero = error (each one has his meaning)
}
