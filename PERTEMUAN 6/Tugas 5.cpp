#include <stdio.h>

int main() {
    // Saldo awal
    double saldo = 1000000;

    // Bunga per bulan (2%)
    double bunga = 0.02;

    // Menghitung saldo setelah 10 bulan
    for (int bulan = 1; bulan <= 10; bulan++) {
        saldo = saldo + (saldo * bunga);
    }

    // Menampilkan hasil
    printf("Saldo setelah 10 bulan: Rp %.2lf\n", saldo);

    return 0;
}
