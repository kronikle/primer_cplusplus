#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){

  vector<int> v1; //  0 undefined
  vector<int> v2(10); // 10 undefined
  vector<int> v3(10, 42); // 10 10x 42
  vector<int> v4{10}; // 1 42
  vector<int> v5{10, 42}; // 2 42 42
  vector<string> v6{10}; // 10 undefined
  vector<string> v7{10, "hi"}; // 10 10x hi

  cout << "v1 lenght: " << v1.size() << endl;
  for (int el : v1){
    cout << el << " ";
  }
  cout << endl;

  
  cout << "v2 lenght: " << v2.size() << endl;
  for (int el : v2){
    cout << el << " ";
  }
  cout << endl;

  
  cout << "v3 lenght: " << v3.size() << endl;
  for (int el : v3){
    cout << el << " ";
  }
  cout << endl;

  
  cout << "v4 lenght: " << v4.size() << endl;
  for (int el : v4){
    cout << el << " ";
  }
  cout << endl;
  

  cout << "v5 lenght: " << v5.size() << endl;
  for (int el : v5){
    cout << el << " ";
  }
  cout << endl;

  
  cout << "v6 lenght: " << v6.size() << endl;
  for (string el : v6){
    cout << el << " ";
  }
  cout << endl;

  
  cout << "v7 lenght: " << v7.size() << endl;
  for (string el : v7){
    cout << el << " ";
  }
  cout << endl;

  return 0;
}
