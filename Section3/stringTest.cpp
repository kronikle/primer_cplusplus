#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main(){
  // literal initialization

  // copy initialize --> = operator
  string my_name = "samuele";
  cout << my_name << endl;

  // direct initializ --> whitout = operator
  string my_surname("albani");
  cout << my_surname << endl;

  // inizializzazione di una sringa comporta
  // copiare in un oggetto string il numero di caratteri inseriti
  string lot_of_d(14, 'd');
  cout << lot_of_d << endl;

  // s.size() return num of char in a string
  cout << "your name is " << my_name << " and is " << my_name.size() << " chars long" << endl;

  // l'operatore >> ignora ogni comando di spazio (barra, ritorno
  // quindi inserirà nella variabile solo la prima parola prima dello spazio
    cout << "\ninsert one word followed by return: ";
  string word;
  cin >> word;
  cout << word << endl;

  // se vogliamo inserire due parole intermezzate da uno spazio
  // servono due oggetti
  // se viene inserito una terza parola prima del tasto return
  // questa non viene storata
  cout << "\ninput two words: ";
  string word1, word2;
  cin >> word1 >> word2;
  cout << word1 << word2 << endl;

  // per leggere uno sconosciuto numero di input usare il while
  // per ogni parola seguita da uno spazio verrà creato un oggetto restituito
  // dopo aver premuto il tasto return
  // ogni oggetto sarò printato dal while loop
  int chances = 5;
  cout << "\ninput any words you want (I will return every word in a newline)(5 times):";
  string inputs;
  while(cin >> inputs && chances >= 0){
    cout << inputs << endl;
    --chances;
  }

  // per non ignorare gli spazi inseriti in console
  // usare geline(stream, stringa)
  cout << "now I will return the entire input, whitewpaces included" << endl;
  string entire_input;
  while(getline(cin, entire_input)){
    cout << entire_input << endl;
  }
  
  return 0;
}
