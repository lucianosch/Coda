const int N = 5; //Posizioni disponibili in coda
struct coda{
	int queue[N];
	int testa; //puntatore al primo elemento della coda
	int fine; //puntatore alla prima posizione libera in coda
};

void stampa (coda);
int inserisci(coda &, int);
int estrai(coda &);
