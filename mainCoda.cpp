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
	miaCoda.nelem=0;
	miaCoda.primo=miaCoda.ultimo = NULL; //Lista vuota	
	srand(time(NULL));
	do
	{
		scelta=menu();
		switch (scelta)
		{
			case 1:
			{
				elemento * nuovo = creaNuovo();
				miaCoda = inserisci(miaCoda,nuovo);
				cout<<"Inserito in coda: "<<nuovo->info<<endl;
				break;
			}
			case 2:
			{
				elemento * primo = estrai(miaCoda);
				if (primo!=0)
					cout<<"Elemento estratto : "<<primo->info<<endl;
				break;
			}
			case 3:
				stampa(miaCoda);
				break;
			case 4:
				cout<<somma(miaCoda)<<endl;
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
	cout<<"4. Somma elementi in coda"<<endl<<endl;
	cout<<"0. Uscita"<<endl;
	cout<<"Scelta: ";
	cin>>s;
	return s;
}
