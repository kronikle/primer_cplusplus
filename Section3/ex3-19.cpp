#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v1 = {42};
  vector<int> v2(1, 42);
  vector<int> v3{42};

  vector<vector<int>>vec_group{v1, v2, v3};
  int count = 1;
  for(vector<int> vec : vec_group){
    cout << "v" << count << " has lenght " << vec.size() << " and has this element: ";
    for (int el : vec){
      cout << el << " ";
    }
    cout << endl;
    ++count;
  }
  
  return 0;
}
