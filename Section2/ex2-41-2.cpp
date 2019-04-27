#include <iostream>
#include <string>

struct Sales_data {
  std::string bookNo;
  int unit_sold;
  double revenue;
};

int main(){
  //
  Sales_data total; 
  if(  std::cin >> total.bookNo >> total.unit_sold >> total.revenue) {

    Sales_data next;
    while (std::cin >> next.bookNo >> next.unit_sold >> next.revenue) {
      if(total.bookNo == next.bookNo){
	total.unit_sold += next.unit_sold;
      } else {
	std::cout << "book: " << total.bookNo <<  " total: " << total.unit_sold << std::endl;
	total.bookNo = next.bookNo;
	total.unit_sold = next.unit_sold;
	total.revenue = next.revenue;

	std::cout << "now total.bookNo is: " << total.bookNo << " and total.unit_sold is: " << total.unit_sold << std::endl;
      }
    }
    std::cout << "total: " << total.unit_sold << std::endl;
    //std::cout <<"ok"<< std::endl;
  } else {
    std::cout << "no input." << std::endl;
  }
  return 0;
}
