#include <stdio.h>

int main() {
    int kode;
    float harga_barang, diskon, harga_setelah_diskon;
    char jenis_barang;

    printf("Program diskon jenis barang\n");
    printf("---------------------------\n");
	printf("Masukkan kode diskon (10): ");
    scanf("%d", &kode);

    printf("Masukkan harga barang: Rp");
    scanf("%f", &harga_barang);

    printf("Masukkan jenis barang (A, B, C): ");
    scanf(" %c", &jenis_barang); 

    switch (jenis_barang) {
        case 'A':
            diskon = 0.1;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.2;
            break;
        default:
            printf("Jenis barang tidak valid\n");
            return 1;
    }

    if (kode == 10) {
        harga_setelah_diskon = harga_barang - (harga_barang * diskon);
        printf("---------------------------\n");
        printf("\nJenis barang: %c\n", jenis_barang);
        printf("Diskon yang diterima: %.2f%%\n", diskon * 100);
        printf("Harga yang harus dibayar: Rp %.2f\n", harga_setelah_diskon);
    } else {
        printf("\nKode diskon tidak valid\n");
        return 1;
    }

    return 0;
}

