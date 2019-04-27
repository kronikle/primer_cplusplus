#include <iostream>
#include <string>

struct Sales_data {
  std::string bookNo;
  int unit_sold;
  double revenue;
};

int main(){

  Sales_data sale1, sale2;

  std::cin >> sale1.bookNo >> sale1.unit_sold >> sale1.revenue;
  std::cin >> sale2.bookNo >> sale2.unit_sold >> sale2.revenue;

  int sum;
  std::string bookSold_name;
  
  if (sale1.bookNo == sale2.bookNo){
    bookSold_name = sale1.bookNo;
    sum = sale1.unit_sold + sale2.unit_sold;

    std::cout << "you have sold n. " << sum << " items of " << bookSold_name << std::endl;
  
    return 0;
    
  } else {
    std::cerr << "\athe books are not the same." << std::endl;

    return -1;
  }
}
