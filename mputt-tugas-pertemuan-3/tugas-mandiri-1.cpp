#include <stdio.h>
#include <math.h>

int main()
{
	int sa,sb,sc,p,a,t,l,k;
	
	printf("Menghitung luas dan keliling segitiga");
	printf("\n====================================");
	printf("\nMasukkan Sisi A =");
	scanf(" %i", &sa);
	printf("\nMasukkan Sisi B =");
	scanf(" %i", &sb);
	printf("\nMasukkan Sisi C =");
	scanf(" %i", &sc);
	printf("\nMasukkan Alas =");
	scanf(" %i", &a);
	printf("\nMasukkan Tinggi =");
	scanf(" %i", &t);
	
	l = 0.5 * a * t;
	k = sa + sb + sc;
	
	printf("Luasnya Adalah = %i", l);
	printf("\nKelilingnya Adalah = %i", k);
	
	return 0;
	
}
