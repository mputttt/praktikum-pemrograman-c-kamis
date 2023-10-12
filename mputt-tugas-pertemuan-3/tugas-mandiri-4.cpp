#include <stdio.h>

int main() {
    int bilangan;
	printf("Menentukan bilangan ganjil atau genap");
	printf("\n===================================");
	printf("\n Masukkan bilangan = ");
	scanf("%i", &bilangan);
	if (bilangan &2==0)
	{
		printf("Bilangan tersebut adalah bilangan Genap ");
	}else
	{
		printf("Bilangan tersebut adalah bilangan Ganjil ");
	}
	
    return 0;
}

