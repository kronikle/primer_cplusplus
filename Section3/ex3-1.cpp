#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
  int sum = 0;
  int counter = 50;
  while(counter <= 100){
    sum+=counter;
    ++counter;
  }

  cout << "sum of numbers from 50 to 100 is " << sum << std::endl;

  counter = 10;
  while(counter >= 0){
    cout << counter << " ";
    --counter;
  }
  cout << "done!" << endl;

  int start, end;
  cout << "\nwrite two numbers please. I will count in between!" << endl;
  cout << "start counting from: " ;
  cin >> start;
  cout << "to: " ;
  cin >> end;
  if(start > end){
    while(start >= end){
      cout << start << " ";
      --start;
    }
    cout << "done!\n";
  } else {
    while (start <= end){
      cout << start << " ";
      ++start;
    }
    cout << "done!\n";
  }
  
  return 0;
}
