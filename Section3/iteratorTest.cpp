#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

  string text = "ciao mi chiamo marco";
  /*
  for(auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it){
    cout << *it << endl;
  }
  */

  if(text.begin() != text.end()){ // make sure string is not empty
    for(auto i = text.begin(); i != text.end(); ++i){
      cout << *i <<  " "; // serve derefenziare perchè è un iterator (text.begin())
    }
    auto it = text.begin();
    *it = toupper(*it);
  }

  cout << '\n' <<  text << endl;
  return 0;
}
