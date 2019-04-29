#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string;

int main(){
  string input1, input2;
  string output_string;
  getline(cin, input1);
  getline(cin, input2);
  output_string = input1 + " " + input2;
  cout << output_string << endl;
  return 0;
}
