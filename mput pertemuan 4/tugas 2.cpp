#include <stdio.h>

int main()
{
	int A,  B, C;
	
	printf("masukan bilanan a,b,dan c\n");
	printf("masukan nilai a :");
	scanf("%i", &A);
	printf("masukan nilai b :");
	scanf("%i", &B);
	printf("masukan nilai c :");
	scanf("%i", &C);
	
	if (A > 50){
		A = A + 10;
	}else {
		A = A - 25;
	}
	
	if (B > 50){
		B = B + 10;
	}else {
		B = B - 25;
	}
	
	if (C > 50){
		C = C + 10;
	}else {
		C = C - 25;
	}
	printf(" bilangan a hasilnya : %i \n", A);
	printf(" bilangan b hasilnya : %i \n", B);
	printf(" bilangan c hasilnya : %i \n", C);
	
	return 0;
}
