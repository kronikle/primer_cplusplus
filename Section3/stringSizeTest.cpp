#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string;
int main(){
  string input;
 
  while(cin >> input && input.size()>1){
    cout << "the word you wrote is: " << input << endl;
    cout << "it's long " << input.size() << " chars.";
    cout << "it starts with \'" << input[0] << "\' and the last char is \'" << input[input.size()-1] << "\'" << endl; 
  }
  
  return 0;
}
