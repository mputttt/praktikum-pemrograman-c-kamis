#include <stdio.h>

int main()
{
	int kode;
	float hb, a, b, c, bayar;
	char jenis;
	
	printf("masukan kode discount yang anda miliki : \n");
	scanf("%i", &kode);
	printf("masukan harga barang yang akan anda beli : \n");
	scanf("%f", &hb);
	printf("masukan jenis barang yang akan anda beli (A, B, C): \n");
	scanf("%c", &jenis);

	
	a = hb * 10 / 100 ;
	b = hb * 15 / 100 ;
	c = hb * 20 / 100 ;
	
	if (kode == 10){
		switch (jenis){
			case 'A' : bayar = hb - (hb * a);
			break;
			case 'B' : bayar = hb - (hb * b);
			break;
			case 'C' : bayar = hb - (hb * c);
			break;
		}{
			printf("dengan kode diskon anda %i dan jenis barang anda adalah %c\n", kode, jenis);
	    	printf("harga yang harus anda bayar adalah : %f \n", bayar);
	    
		}
	}else {
		printf("maaf anda belum bis amendapatkan diskon karena kode yang and amasukan kadaluarsa\n");
		printf("dengan kode diskon anda %i dan jenis barang anda adalah %c\n", kode, jenis);
		printf("harga yang harus anda bayar adalah : %f \n", hb);
	}
	
	return 0;
	
}
