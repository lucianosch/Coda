#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Coda.h"

using namespace std;

int menu();
int main()
{
	int scelta;
	coda miaCoda;
	miaCoda.testa = 0;
	miaCoda.fine = 0;
	srand(time(NULL));
	do
	{
		scelta=menu();
		switch (scelta)
		{
			case 1:
			{
				int nuovo = rand()%100 + 1;
				int ris = inserisci(miaCoda,nuovo);
				if (ris==0)
					cout<<"Inserito in coda: "<<nuovo<<endl;
				else
					cout<<"Coda piena!"<<endl;
				break;
			}
			case 2:
			{
				int primo = estrai(miaCoda);
				if (primo!=0)
					cout<<"Elemento estratto : "<<primo<<endl;
				break;
			}
			case 3:
				stampa(miaCoda);
				break;
			case 0:
				break;
			default:
				cout<<"Scelta errata!"<<endl;
				break;
		}
	}while (scelta!=0);
	return 0;
}
int menu()
{
	int s;
	cout<<"1. Inserisci nuovo elemento"<<endl;
	cout<<"2. Estrai primo elemento"<<endl;
	cout<<"3. Stampa coda"<<endl;
	cout<<"0. Uscita"<<endl;
	cout<<"Scelta: ";
	cin>>s;
	return s;
}
