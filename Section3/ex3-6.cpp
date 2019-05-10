#include <iostream>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;

int main(){
  string str = "hello world";

  for (auto c : str){
    c = 'X';
  }

  cout << str << endl;

  return 0;
}
