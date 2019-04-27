#include <iostream>

struct Sales_data{
  std::string name;
  double price;
  std::string position;
};

Sales_data data1, data2;

int main(){

  data1.name = "cloe";
  data2.name = "barbagianni";

  std::cout << "we have 2 objects of type Sales_data. data1 name is " << data1.name << " - data2 name is " << data2.name << std::endl;
  return 0;
}
