#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

  string text = "ciao mi chiamo marco";

  for(auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it){
    cout << *it << endl;
  }
  
  return 0;
}
