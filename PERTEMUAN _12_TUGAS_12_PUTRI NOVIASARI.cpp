#include <stdio.h>
#include <string.h>

int main() {
    char A[11] = "JOGJAKARTA";
    int i, j, count[26] = {0}, max_count = 0, max_letter = 'A';

    for (i = 0; i < strlen(A); i++) {
        count[A[i] - 'A']++;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_letter = i + 'A';
        }
    }

    printf("Jumlah huruf yang terbanyak: %d\n", max_count);
    printf("Huruf yang terbanyak: %c\n", max_letter);

    return 0;
}
