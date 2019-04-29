#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string;

int main(){

  cout << "write something" << endl;

  string input;
  //  while(getline(cin, input)){ // entire line version
  while (cin >> input){ // word by word version
    if(input.size() > 1){
      cout << input << endl;
    } else {
      return 0;
    }
  }

}
