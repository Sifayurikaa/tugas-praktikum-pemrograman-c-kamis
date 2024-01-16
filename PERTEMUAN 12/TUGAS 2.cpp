#include <stdio.h>
#include <string.h>

int main() {
    char A[11] = "JOGJAKARTA";
    int i, j, count[26] = {0}, max_count = 0, max_letter = 'A';
	
	printf(" Isi Array A :");
	for (i=0; i<12; i++) {
		printf("%3c", A[i]);
	}
    for (i = 0; i < strlen(A); i++) {
        count[A[i] - 'A']++;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_letter = i + 'A';
        }
    }
    printf("\n Huruf yang terbanyak: %c\n", max_letter);
    printf(" Jumlah huruf yang terbanyak: %d\n", max_count);
    return 0;
}
