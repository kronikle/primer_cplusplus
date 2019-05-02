#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(){
  string str("some string");
  for(auto c : str)
    cout << c << endl;

  for(auto &c : str)
    c = toupper(c);

  cout << str << endl;

  
  return 0;
}
