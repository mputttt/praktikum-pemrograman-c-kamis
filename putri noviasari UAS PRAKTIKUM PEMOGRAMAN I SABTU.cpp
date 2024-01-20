#include <stdio.h>
#include <unistd.h>

// Array untuk menyimpan ketebalan pengelasan
int ketebalan[] = {6, 8, 12, 24, 30, 36, 42, 49, 50};
int jumlah_ketebalan = sizeof(ketebalan) / sizeof(ketebalan[0]);

// Array untuk menyimpan waktu pengelasan
int waktu[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int jumlah_waktu = sizeof(waktu) / sizeof(waktu[0]);

// Fungsi untuk menghitung nilai tengah dari array
int nilai_tengah(int arr[], int n) {
    if (n % 2 == 0) {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2;
    } else {
        return arr[n / 2];
    }
}

// Fungsi untuk langkah 3: Pindah motor listrik utama ke nilai tengah ketebalan
void pindah_motor_utama(int nilai_tengah) {
    printf("Motor listrik utama berpindah ke nilai tengah %d.\n", nilai_tengah);
}

// Fungsi untuk langkah 4: Aktifkan motor listrik lengan tungkai
void aktifkan_motor_lengan_tungkai() {
    printf("Motor listrik lengan tungkai aktif. Berputar 45 derajat.\n");
}

// Fungsi untuk langkah 5: Aktifkan motor listrik jari robot
void aktifkan_motor_jari_robot() {
    printf("Motor listrik jari robot mendekati objek.\n");
}

// Fungsi untuk langkah 6: Proses pengelasan selama waktu tertentu
void proses_pengelasan(int ketebalan, int waktu) {
    printf("Proses pengelasan dengan ketebalan %d mm selama %d detik.\n", ketebalan, waktu);
}

// Fungsi untuk langkah 7: Tunggu selama 3 detik
void tunggu_tiga_detik() {
    printf("Proses pengelasan selesai. Kembali ke langkah 3.\n\n");
    sleep(3);
}

// Fungsi untuk melakukan seluruh langkah-langkah pengelasan
void proses_pengelasan_robot() {
    int i;

    for (i = 0; i < jumlah_ketebalan; i++) {
        int nilai_tengah_ketebalan = nilai_tengah(ketebalan, jumlah_ketebalan);

        pindah_motor_utama(nilai_tengah_ketebalan);
        aktifkan_motor_lengan_tungkai();
        aktifkan_motor_jari_robot();
        proses_pengelasan(ketebalan[i], waktu[i]);
        tunggu_tiga_detik();
    }
}

int main() {
    printf("welcome to the robbot welding program!\n");

    printf("Tombol Start ditekan. Motor listrik utama berputar 180 derajat.\n");

    proses_pengelasan_robot();

    printf("Semua proses pengelasan selesai. Program berakhir.\n");

    return 0;
}
