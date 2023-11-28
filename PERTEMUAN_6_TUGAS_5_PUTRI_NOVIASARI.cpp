#include <stdio.h>

int main() {
    // Jumlah awal uang yang disimpan
    double saldoAwal = 1000000.0;

    // Suku bunga/bulan (dalam desimal)
    double sukuBunga = 0.02;

    // Jumlah bulan
    int jumlahBulan = 10;

    // Menghitung jumlah uang setelah 10 bulan
    for (int i = 1; i <= jumlahBulan; i++) 
	{
        saldoAwal = saldoAwal + (saldoAwal * sukuBunga);
    }

    // Menampilkan jumlah uang setelah 10 bulan
    
    printf("Jumlah uang setelah %i bulan,", jumlahBulan);
    printf(" adalah Rp. %.1f\n", saldoAwal);

    return 0;
}

