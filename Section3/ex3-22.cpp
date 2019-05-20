#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

  string text = "culo palo ";


  if(text.begin() != text.end()){
    auto it = text.begin();
    *it = toupper(*it);
  }
  cout << text << endl;


  for(auto it = text.begin(); it != text.end() && isempty(*it); ++it){
    cout << *it << endl;
  }
  
  return 0;
}
