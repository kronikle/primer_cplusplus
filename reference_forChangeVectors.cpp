#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (int &i : v){
    i *= i;
  }


  for (int i : v){
    cout << i;
  }
  cout << endl;
  
  return 0;
}
