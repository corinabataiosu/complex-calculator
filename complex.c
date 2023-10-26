#include <stdio.h>

#include "complex.h"


//implementarea functiei de afisare a unui numar complex
void afisare(numar_complex nr1)
{
	printf("\t%.2f + %.2f*i\n", nr1.p_reala, nr1.p_imaginara);
}

//implementarea operatiei de adunare a doua numere complexe
void adunare(numar_complex nr1, numar_complex nr2)
{
	//declararea unei variabile locale care memoreaza rezultatul obtinut
	numar_complex rezultat;

	//calculul sumei - se aduna partile reale, respectiv imaginare
	rezultat.p_reala = nr1.p_reala + nr2.p_reala;
	rezultat.p_imaginara = nr1.p_imaginara + nr2.p_imaginara;

	printf("Suma lor este:\n");
	afisare(rezultat);
}

//implementarea operatiei de scadere a doua numere complexe
void scadere(numar_complex nr1, numar_complex nr2)
{
	//declararea unei variabile locale care memoreaza rezultatul obtinut
	numar_complex rezultat;

	//calculul diferentei - se scad partile reale, respectiv imaginare
	rezultat.p_reala = nr1.p_reala - nr2.p_reala;
	rezultat.p_imaginara = nr1.p_imaginara - nr2.p_imaginara;

	printf("Diferenta lor este:\n");
	afisare(rezultat);
}

//implementarea operatiei de inmultire a doua numere complexe
void inmultire(numar_complex nr1, numar_complex nr2)
{
	//declararea unei variabile locale care memoreaza rezultatul obtinut
	numar_complex rezultat;

	//calculul produsului
	rezultat.p_reala = (nr1.p_reala *nr2.p_reala) - (nr1.p_imaginara *nr2.p_imaginara);
	rezultat.p_imaginara = (nr1.p_reala *nr2.p_imaginara) + (nr2.p_reala *nr1.p_imaginara);

	printf("Produsul lor este:\n");
	afisare(rezultat);
}

//implementarea operatiei de inmultire a doua numere complexe
void impartire(numar_complex nr1, numar_complex nr2)
{
	//declararea unei variabile locale care memoreaza rezultatul obtinut
	numar_complex rezultat;

	float numitor = nr2.p_reala * nr2.p_reala + nr2.p_imaginara * nr2.p_imaginara;

	rezultat.p_reala = ((nr1.p_reala * nr2.p_reala) + (nr1.p_imaginara * nr2.p_imaginara))/numitor;
	rezultat.p_imaginara = ((nr2.p_reala * nr1.p_imaginara) - (nr1.p_reala * nr2.p_imaginara))/numitor;

	printf("Catul lor este:\n");
	afisare(rezultat);
}