#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string;

int main(){
  string line1, line2;
  while(getline(cin, line1)){
    if(line1.size() > 1) {
      getline(cin, line2);
      if(line2.size() > 1) {
	if(line1.size() == line2.size()){
	  cout << "the two string are equal" << endl;
	} else {
	  if(line1.size() > line2.size()){
	    cout << "the first string is longer" << endl;
	  } else {
	    cout << "the second string is longer" << endl;
	  }
	}  
      }
    } else {
      return 0;
    }
  }

}
