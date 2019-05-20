#include <iostream>
#include <vector>

using namespace std;

int main(){
  int sum = 0;
  vector<int> vec{10, 5, 25, 10, 15, 24};
  for (int i : vec){
    cout << i << " ";
  }
  cout <<endl;
  cout << "vec size = " << vec.size() << endl;
  //  cout << "vec size/2 = " << vec.size()/2 << endl;
  for (int i = 0; i < vec.size()/2; ++i){
    cout << "(el[" << i << "] + el[" << ((vec.size() - (i+1))) << "]) = " ;
    cout << vec[i] << " + " << vec[vec.size() -(i + 1)] << " =  ";
		
    sum = vec[i] + vec[vec.size() -i];
    cout << sum << " " << endl ;
  }
  
  cout << endl;
  sum = 0;
  for (int i = 0; i < vec.size(); i+=2){
    cout << "(el[" << i << "] + el[" << i+1 << "]) = ";
    cout << vec[i] << " + " << vec[i+1] << " = ";
    sum = vec[i] + vec[i+1];
    cout << sum << endl;
  }
  return 0;

}
