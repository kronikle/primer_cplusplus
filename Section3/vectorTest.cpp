#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::cin; using std::endl;
using std::vector;
using std::string;

int main(){
  // vector is not a type, it's a container of objects of any type
  // initializations
  // list of initial elements
  vector<int> first_vector{0, 23, 14};

  // set the initial number of elements
  vector<int> second_vector(10);

  // set the initial number of elements, and set initial values of each
  vector<int> third_vector(3, 14);
  vector<string> fourth_vector(5, "hello!");

  vector<int> empty_vec;
  vector<string> input_vec;
  cout << "first vector = {";
  for (int el : first_vector){
    cout << el << " ";
  }
  cout << "}" << endl;

  for(string salutos : fourth_vector){
    cout << salutos << " ";
  }
  cout <<"\n";
  cout << "input some words than write stop to go on" << endl;

  string input;
  while (cin >> input && input != "stop"){
    input_vec.push_back(input);
  }

  cout << "you insered " << input_vec.size() << " words." << endl;

  for(string el : input_vec){
    cout << el << endl;
  }

  if(empty_vec.empty()){
    cout << "empty_vec is empty" << endl;
  }
  

  
  
  return 0;
}
