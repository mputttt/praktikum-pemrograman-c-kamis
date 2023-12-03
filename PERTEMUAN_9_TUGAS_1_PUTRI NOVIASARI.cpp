#include <stdio.h>

int main()
{
	
	int A[11]={12,17,10,5,15,25,11,7,25,16,19};
	int I,N;
	
	printf("masukan bilangan integer = ");
	scanf("%i",&N);
	
	for (I=0; I<11; I++){
		printf("%3i",A[I]);
	}
	I=0;
	while (I<=10){
		if(A[I]==N){
			break;
		}
		I++;
	}
	if(A[I]==N){
		printf("\nADA");
		printf("\nlokasi yang sama ada di = %3i",I);
	}else {
		printf("\nTIDAK ADA");
	}
	
	return 0;
}
