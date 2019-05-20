#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(){
  vector<string> my_vec;
  string input;

  while((cin >> input) && (input != "exit")){
    my_vec.push_back(input);
  }

  cout <<"\nyour vector is:" << endl;
  for(string el : my_vec){
    cout <<"- " <<  el << endl;
  }

  return 0;
}
