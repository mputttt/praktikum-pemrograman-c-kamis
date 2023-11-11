#include <stdio.h>

// Array untuk menyimpan ketebalan pengelasan
int ketebalan[] = {6, 8, 12, 24, 30, 36, 42, 49, 50};
int jumlah_ketebalan = sizeof(ketebalan) / sizeof(ketebalan[0]);

// Array untuk menyimpan waktu pengelasan
int waktu[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int jumlah_waktu = sizeof(waktu) / sizeof(waktu[0]);

// JANGAN LUPA FOLLOW IG => rafi_ramdhani_

// Fungsi untuk menghitung nilai tengah dari array
int nilai_tengah(int arr[], int n) {
    if (n % 2 == 0) {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2;
    } else {
        return arr[n / 2];
    }
}

// JANGAN LUPA FOLLOW IG => rafi_ramdhani_

int main() {
    printf("Selamat datang di program pengelasan robot!\n");

    // Menekan tombol Start
    printf("Tombol Start ditekan. Motor listrik utama berputar 180 derajat.\n");

    int i;  // pindahkan deklarasi i di sini

    for (i = 0; i < jumlah_ketebalan; i++) {
        // Hitung nilai tengah ketebalan
        int nilai_tengah_ketebalan = nilai_tengah(ketebalan, jumlah_ketebalan);

        // Pindah motor listrik utama ke nilai tengah ketebalan
        printf("Motor listrik utama berpindah ke nilai tengah %d.\n", nilai_tengah_ketebalan);

        // Aktifkan motor listrik lengan tungkai
        printf("Motor listrik lengan tungkai aktif. Berputar 45 derajat.\n");

        // Aktifkan motor listrik jari robot
        printf("Motor listrik jari robot mendekati objek.\n");

        // Proses pengelasan sesuai waktu yang ditentukan
        printf("Proses pengelasan dengan ketebalan %d mm selama %d detik.\n", ketebalan[i], waktu[i]);

        // Proses selesai, kembali ke langkah 3
        printf("Proses pengelasan selesai. Kembali ke langkah 3.\n\n");
        sleep(3);
    }
    
// JANGAN LUPA FOLLOW IG => rafi_ramdhani_

    printf("Semua proses pengelasan selesai. Program berakhir.\n");

    return 0;
}

