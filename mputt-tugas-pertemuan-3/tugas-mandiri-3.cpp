#include <stdio.h>

int main()
{
	int alas,tinggi,sisimiringa,sisimiring;
	
	printf("Menghitung luas dan keliling segitiga");
	printf("\n====================================");
	printf("\nMasukkan Alas =");
	scanf(" %i", &alas);
	printf("\nMasukkan Tinggi =");
	scanf(" %i", &tinggi);
	
	sisimiringa = (alas * alas) + (tinggi * tinggi);
	sisimiring = sisimiringa / 2;
	
	printf("\n");
	printf("SisiMiring2(kuadrat)nya Adalah = %i", sisimiringa);
	printf("\nSisiMiringnya Adalah = %i", sisimiring);
	return 0;
}
