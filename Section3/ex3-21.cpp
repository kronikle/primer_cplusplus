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
  for (auto it = v1.cbegin(); it != v1.cend(); ++it ){ // it è un iterator const perchè non deve cambiare e quindi è const (solo lettura)
    // it->empty()  la freccia serve per combinare una funzione all'iterator
    cout << *it << " "; // l'* serve per dereference ed accedere al valore dell'iterator
  }
  cout << endl;

  cout << "v2 lenght: " << v2.size() << endl;
  for (auto it = v2.cbegin(); it != v2.cend(); ++it ){ 
    cout << *it << " "; 
  }
  cout << endl;

  cout << "v3 lenght: " << v3.size() << endl;
  for (auto it = v3.cbegin(); it != v3.cend(); ++it ){ 
    cout << *it << " "; 
  }
  cout << endl;

  cout << "v4 lenght: " << v4.size() << endl;
  for (auto it = v4.cbegin(); it != v4.cend(); ++it ){ 
    cout << *it << " "; 
  }
  cout << endl;

  cout << "v5 lenght: " << v5.size() << endl;
  for (auto it = v5.cbegin(); it != v5.cend(); ++it ){ 
    cout << *it << " "; 
  }
  cout << endl;

  cout << "v6 lenght: " << v6.size() << endl;
  for (auto it = v6.cbegin(); it != v6.cend(); ++it ){ 
    cout << *it << " "; 
  }
  cout << endl;

  cout << "v7 lenght: " << v7.size() << endl;
  for (auto it = v7.cbegin(); it != v7.cend(); ++it ){ 
    cout << *it << " "; 
  }
  cout << endl;


  
  return 0;
}
