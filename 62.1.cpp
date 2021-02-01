#include <iostream>
#include <fstream>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ifstream file; //plik wejsciowy
	ofstream fileOut;
	file.open("liczby1.txt"); //otworz plik liczb
 	fileOut.open("wyjscie.txt");
	int SIZE = 1000;
	int tab[SIZE]; 
	for (int i = 0; i < SIZE; i++) in >> tab[i];
	plik >> oct >> min;
	plik >> oct >> max; 
	cout<<"Najmniejsza liczba to: "<<min<<endl; 
	cout<<"Najwieksza liczba to: "<<max;
	file.close();
 	fileOut.close();
	return 0;
}
