#include <stdio.h>

int main() {
    // Kecepatan sepeda dalam meter/detik
    int kecepatan = 2;

    // Waktu yg ditanya dalam detik
    int waktu = 100;

    // Menghitung jarak yg ditempuh dengan rumus (kecepatan * waktu)
    int jarak = kecepatan * waktu;

    // Hasil jarak yg ditempuh
    printf("Jarak yang ditempuh setelah %i detik,", waktu);
    printf(" adalah = %i meter.\n", jarak);

    return 0;
}
