#include <stdio.h>
int main()
{
	char A[8] = "JAKARTA";
	int I, J, p =0, flag=0;
	int counts[256]={0};
	//cetak isi array A
	
	printf(" Proram mencari huruf yang sama\n ");
	printf("Isi Array A : ");
	for (I=0; I<8; I++) {
		printf("%3c", A[I]);
	}
	printf("\n mencari huruf yang sama ");
	for (J=0; J<5; J++) {
		if (A[J] == 'A') {
		flag = 1; break;
		}
	}

	if(flag==1) {
		printf("\n ADA \n HURUF :");
	} else {
		printf("\n TIDAK ADA");
	}
	while(p[A])
		counts[A[p++]]++;
		for(p=0;p<256;p++)
			if(counts[p]>1)
				printf("%c", p);
	return 0;
}

