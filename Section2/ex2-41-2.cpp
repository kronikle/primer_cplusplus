#include <iostream>
#include <string>

struct Sales_data {
  std::string bookNo;
  int unit_sold;
  double revenue;
};

int main(){
  //
  Sales_data current;
  //   std::cin >> current.bookNo;
  int sum = 0;
  
  if(  std::cin >> current.bookNo >> current.unit_sold >> current.revenue) {

    Sales_data next;
    while (std::cin >> next.bookNo >> next.unit_sold >> next.revenue) {
      if(current.bookNo == next.bookNo){
	current.unit_sold += next.unit_sold;
      } else {
	std::cout << "total: " << current.unit_sold << std::endl;
	current.unit_sold = next.unit_sold;
      }
    }
    std::cout << "total: " << current.unit_sold << std::endl;
    //std::cout <<"ok"<< std::endl;
  } else {
    std::cout << "no input." << std::endl;
  }
  return 0;
}
