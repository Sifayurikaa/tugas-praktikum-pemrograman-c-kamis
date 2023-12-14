#include <stdio.h>

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12];
    int indexC = 0;

    // Menyalin nilai yang lebih besar dari 10 dari array A ke array C
    for (int i = 0; i < 5; i++) {
        if (A[i] > 10) {
            C[indexC] = A[i];
            indexC++;
        }
    }

    // Menyalin nilai yang lebih besar dari 10 dari array B ke array C
    for (int i = 0; i < 7; i++) {
        if (B[i] > 10) {
            C[indexC] = B[i];
            indexC++;
        }
    }

    // Menampilkan isi array C (a)
    printf("a. 0 1 2 3 4 5 6 7 8 9 10 11\nC ");
    for (int i = 0; i < indexC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    // Reset indexC untuk penggunaan ulang
    indexC = 0;

    // Menyalin nilai dari array A dan B secara bergantian ke array C
    for (int i = 0; i < 5 || i < 7; i++) {
        if (i < 5 && A[i] > 10) {
            C[indexC] = A[i];
            indexC++;
        }
        if (i < 7 && B[i] > 10) {
            C[indexC] = B[i];
            indexC++;
        }
    }

    // Menampilkan isi array C (b)
    printf("\nb. 0 1 2 3 4 5 6 7 8 9 10 11\nC ");
    for (int i = 0; i < indexC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
