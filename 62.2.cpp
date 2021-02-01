#include <iostream>
#include <fstream>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ifstream file; //plik wejsciowy
	ofstream fileOut;
	file.open("liczby2.txt"); //otworz plik liczb
	fileOut.open("wyjscie.txt");
	int tab[SIZE];
	for (int i = 0; i < 1000; i++) in >> tab[i];
	int dlugosc = 0; 
	int maxdlugosc = 0;
	int firstNumber = 0;
	int naj;
	for (int i = 1; i < SIZE; i++) {
    if (tab[i] >= tab[i - 1]) {
      dlugosc++;
      if (lpier == 0) {
        naj = tab[i - 1];
      }
    }
    else{
      if (dlugosc > maxdlugosc) {
        maxdlugosc = dlugosc;
        naj = lpier;
    }
  }
}
  plik>>maxdlugosc;
  plik>>naj;
	file.close();
 	fileOut.close();
	return 0;
}
