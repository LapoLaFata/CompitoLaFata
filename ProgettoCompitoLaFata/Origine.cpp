#include <iostream>
using namespace std;

void main()
{
	int iconta = 0; //Creazione variabile contatore
	for (int i = 0; i < 10; i++) //ciclo per far scorrere variabile
	{
		iconta++;//incremento variabile contatore
		cout << "Prova:" <<iconta << endl;
		iconta--;
		
	}
}