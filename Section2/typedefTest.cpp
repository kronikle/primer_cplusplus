#include <iostream>

int main(){

  typedef int intero;

  intero culo = 0;
  std::cout << "typedef serve a creare degli alias per i tipi:\nsi può creare un nuovo nome per denominare i tipi, ad esempio facendo\n\ttypedef int intero;\nsi può dichiarare un oggetto int con\n\tintero varName = 0;" << std::endl;

  ++culo;
  std::cout << culo << std::endl;

  
  return 0;
}
