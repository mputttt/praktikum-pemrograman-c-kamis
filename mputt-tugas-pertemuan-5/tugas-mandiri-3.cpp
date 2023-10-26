#include <stdio.h>

int main()
{   int jMasuk, jKeluar, Lama;
    float BBiaya;
   
    printf("Program Menghitung Biaya Parkir");
    printf("\n------------------------------\n");
	printf("Menghitung Biaya Parkir\n\n");
    printf("Jam Masuk : ");
    scanf("%d",&jMasuk);

    printf("\nJam Keluar : ");
    scanf("%d",&jKeluar);
   
    if (jKeluar >= jMasuk){
          Lama = jKeluar - jMasuk;                                     
    }else{
          Lama = (12-jMasuk) + jKeluar;
    }
   
    if (Lama > 2){
       BBiaya = 2000 + ((Lama - 2)*500);
    }else{
        BBiaya = 2000;
    }
    printf("--------------------------------\n");
    printf("\n Biaya parkir adalah : Rp %2.f \n", BBiaya);
   
    return 0;
}
