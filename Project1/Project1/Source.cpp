#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {

	double ancho,alto = 0 ;

	string textoActual = "";
	do {
		cout <<"Escribe ancho quadrado" << endl;
		getline(cin, textoActual);
		//COMPROBAR QUE NO SEA UN STRING QUE NO SEA NÚMERO
		ancho = stod(textoActual);
	} while (ancho == 0);

	do {
		cout << "Escribe alto quadrado" << endl;
		getline(cin, textoActual);
		//COMPROBAR QUE NO SEA UN STRING QUE NO SEA NÚMERO
		alto = stod(textoActual);
	} while (alto == 0);

	for (int i = 0; i < ancho; i++) {

		cout << "[-]";

	}cout << endl;

	for (int i = 2; i < alto; i++) {
		cout << "[-]";
		for (int j = 2; j < ancho; j++) cout << "[ ]";
		cout << "[-]" << endl;
	}

	for (int i = 0; i < ancho; i++) {

		cout << "[-]";

	}cout << endl;

	getline(cin, textoActual);
	return 0;
}