struct elemento {
	int info;
	elemento * succ;
};
struct coda{
	int nelem;
	elemento * primo;
	elemento * ultimo;
};

void stampa (coda);
elemento * creaNuovo();
coda inserisci(coda, elemento *);
elemento * estrai(coda &);
bool vuota(coda);
int somma(coda);
