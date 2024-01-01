include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12] = {0};
    int C[12] = {0};
    int avg = 0;
    int count_b = 0;
    int count_c = 0;
    int i;

    // Calculate the average of array A
    for(i = 0; i < 12; i++) {
        avg += A[i];
    }
    avg /= 12;

    // Sort the elements of array A into array B and array C based on their values compared to the average
    for(i = 0; i < 12; i++) {
        if(A[i] > avg) {
            B[count_b++] = A[i];
        } else if(A[i] < avg) {
            C[count_c++] = A[i];
        }
    }

    // Print the elements of array A, B, and C
    printf("Elements of array A: ");
    for(i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Elements of array B: ");
    for(i = 0; i < count_b; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Elements of array C: ");
    for(i = 0; i < count_c; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
