#include <stdio.h>

#include "complex.h"

int main()
{
	numar_complex numar1, numar2;

	printf("CALCULATOR NUMERE COMPLEXE \n Pentru a calcula, introduceti:\n");
	printf("Partea reala si imaginara a primului numar:\n");
	scanf_s("%f%f", &numar1.p_reala, &numar1.p_imaginara);
	printf("Partea reala si imaginara a celui de-al doilea numar:\n");
	scanf_s("%f%f", &numar2.p_reala, &numar2.p_imaginara);

	printf("Numerele complexe introduse sunt:\n");
	afisare(numar1);
	afisare(numar2);

	adunare(numar1, numar2);

	scadere(numar1, numar2);

	inmultire(numar1, numar2);

	impartire(numar1, numar2);

}