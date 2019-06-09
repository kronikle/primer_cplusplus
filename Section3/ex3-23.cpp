#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> my_vec;

  for (int i = 0; i< 10; ++i){
    my_vec.push_back(i);
  }

  for (int n : my_vec){
    cout << n << ' ';
  }
  cout << endl;

  for (auto en = my_vec.begin(); en != my_vec.end(); ++en){
    *en*=2;
  }

  for (int n : my_vec){
    cout << n << ' ';
  }
  cout << endl;

  return 0;
}
