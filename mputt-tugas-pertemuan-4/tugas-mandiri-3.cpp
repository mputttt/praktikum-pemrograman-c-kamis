#include <stdio.h>

int main()
{
	int A, a, B, b, C, c;
	
	printf("masukan bilanan a,b,dan c\n");
	printf("masukan nilai a :");
	scanf("%i", &A);
	printf("masukan nilai b :");
	scanf("%i", &B);
	printf("masukan nilai c :");
	scanf("%i", &C);
	
	if (A > 50){
		A = A - 25;
	}
	a = A + 10;
	
	if (B > 50){
		B = B - 25;
	}
	b = B + 10;
	
	if (C > 50){
		C = C - 25;
	}
	c = C + 10;
	
	printf(" bilangan a hasilnya : %i \n", a);
	printf(" bilangan b hasilnya : %i \n", b);
	printf(" bilangan c hasilnya : %i \n", c);
	
	return 0;
}
