#include <stdio.h>

int main()
{
	int suhuCelcius;
	float suhuFahrenheit,suhuReamur;
	
	printf("Menghitung luas dan keliling segitiga");
	printf("\n====================================");
	printf("\nMasukkan Suhu Celcius =");
	scanf(" %i", &suhuCelcius);
	
	suhuFahrenheit = suhuCelcius * 1.8 + 32;
	suhuReamur = suhuCelcius * 0.8;
	
	printf("\nJika Dalam Suhu Fahrenheit = %f", suhuFahrenheit);
	printf("\nJika Dalam Suhu Reamur = %f", suhuReamur);
}
