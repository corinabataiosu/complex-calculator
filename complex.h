#pragma once

typedef struct complex {
	float p_reala;
	float p_imaginara;
}numar_complex;


//declararea functiei ce afiseaza un numar complex
void afisare(numar_complex nr1);
//declararea functiei ce implementeaza operatia de adunare a doua numere complexe
void adunare(numar_complex nr1, numar_complex nr2);
//declararea functiei ce implementeaza operatia de scadere a doua numere complexe
void scadere(numar_complex nr1, numar_complex nr2);
//declararea functiei ce implementeaza operatia de inmultire a doua numere complexe
void inmultire(numar_complex nr1, numar_complex nr2);
//declararea functiei ce implementeaza operatia de impartire a doua numere complexe
void impartire(numar_complex nr1, numar_complex nr2);