#include <stdio.h>

int main()
{
	int B;
	printf("program muntuk menentukan bilangan ganjil atau genap\n");
	printf("----------------------------------------------------\n");
	printf("masukan bilangan yang akan di nilai :");
	scanf("%i", &B);
	
	if (B%2==1) {
		printf("bilangan diatas adalah \"GANJIL\"");
	}else {
		printf("bilangan di atas adalah \"GENAP\"");
	}
	return 0;
}
