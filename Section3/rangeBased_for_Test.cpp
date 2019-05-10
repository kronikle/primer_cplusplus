#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(){
  string str("some string number 1");

  int digit_counter = 0;
  int space_counter = 0;
  for(auto c : str){
    cout << c << endl;

    if (isspace(c)){
      ++space_counter;
    } else if (isdigit(c)){
	++digit_counter;
    }
      
  }

  cout << "In this string there are " << digit_counter << " numbers and " << space_counter << " spaces." << endl;
    
  for(auto &c : str)
    c = toupper(c);

  cout << str << endl;

  
  return 0;
}
