// la prima volta che questo header verrà chiamato (in caso di programmi
// formati da più files che usano ipoteticamente questa classe)
// la variabile del preprocessor SALES_DATA_H risulterà non definita
// per cui l'#ifndef risulterà true e la classe Sales_data e i suoi contenuti
// verranno copiati nel programma e da lì in poi le funzioni del programma
// o altre classi potranno instanziare suoi oggetti ed usarla
// ma non verrà più ri-definita o copiata, perchè le volte successive
// il contenuto dell'#ifndef - #endif, verrà ignorato.

// gli header possono includere altre classi sia standard che personali
// come <string> o altri header.h

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
  std::string bookNo;
  int unit_sold;
  double revenue;
};

#endif


