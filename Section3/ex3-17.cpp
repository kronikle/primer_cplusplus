#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

  vector<string> my_vec;

  string input;
  while(cin >> input && input != "stop"){
    my_vec.push_back(input);
  }

  for (string &el : my_vec){
    for (auto &c : el){
      c = toupper(c);
    }
  }

  for(string el : my_vec){
    cout << el << " ";
  }
  cout << endl;

  
  return 0;
}
