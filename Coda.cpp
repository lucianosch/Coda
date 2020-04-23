#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Coda.h"

using namespace std;

elemento * creaNuovo()
{
	elemento * nuovo = new(elemento);
	//Valorizzo il campo info
	nuovo->info = rand()%90+1;
	nuovo->succ=NULL;
	return nuovo;
}

coda inserisci(coda c, elemento * e)
{
	
	if (c.primo==NULL)
		c.primo = e;
	else
		c.ultimo->succ = e;
	c.ultimo = e;
	c.nelem++;
	
	return c;
}

elemento * estrai(coda &c)
{
	elemento * temp = 0;
	if (!vuota(c))
	{
	
		temp = c.primo;
		if (c.primo==c.ultimo)
			c.primo = c.ultimo = NULL;
		else
			c.primo = temp->succ;
		c.nelem>0?c.nelem--:c.nelem=0;
	
	}
	return temp;
}

void stampa (coda c)
{
	cout<<"La coda contiene: "<<c.nelem<<" elementi"<<endl;
	elemento * temp = c.primo;
	while (temp!=NULL)
	{
		cout.width(3);
		cout<<temp->info;
		temp = temp->succ;
	}
	cout<<endl;
}
bool vuota (coda c)
{
	return c.nelem==0;
}
int somma(coda c)
{
	int s = 0;
	while (c.primo !=0)
	{
		s += c.primo->info;
		c.primo = c.primo->succ;
	}
	return s;
}
