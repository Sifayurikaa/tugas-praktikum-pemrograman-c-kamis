#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int sum = 0, countA = 0, countB = 0, countC = 0;

    // Calculate the sum of array A
    for (int i = 0; i < 12; i++) {
        sum += A[i];
    }

    // Calculate the average
    float average = (float)sum / 12;

    // Check and move values to arrays B and C
    for (int i = 0; i < 12; i++) {
        if (A[i] > average) {
            B[countB++] = A[i];
        } else if (A[i] < average) {
            C[countC++] = A[i];
        }
    }

    // Display contents of arrays A, B, and C
    printf("NILAI MAHASISWA: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }
	printf ("\nNilai rata-rata mahasiswa adalah: %2.f",average);
    printf("\nNILAI MAHASISWA DI ATAS RATA-RATA: ");
    for (int i = 0; i < countB; i++) {
        printf("%d ", B[i]);
    }

    printf("\nNILAI MAHASISWA DI BAWAH RATA-RATA: ");
    for (int i = 0; i < countC; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
