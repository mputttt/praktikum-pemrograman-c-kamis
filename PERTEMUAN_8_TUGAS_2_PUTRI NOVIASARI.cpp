#include <stdio.h>

int main() {
    char A[11] = {'S', 'T', 'T', '^', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char karakter;
    int count = 0;

    printf("Masukkan sebuah karakter: ");
    scanf(" %c", &karakter);

    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        if (A[i] == karakter) {
            count++;
        }
    }

    if (count > 0) {
        printf("ADA\nJumlah karakter '%c' dalam array: %d\n", karakter, count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
