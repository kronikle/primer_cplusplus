#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main(){
  vector<int> my_vec;
  int input;

  while (cin >> input){
    my_vec.push_back(input);
  }

  for(int vec_el : my_vec){
    cout << vec_el << " ";
  }
  cout << endl;
  
  return 0;
}
