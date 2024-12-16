#include <stdio.h>

int main() {
    int peserta, jojo, lili, bibi;
	int total_nilai, total_peserta, rata_rata, nilai_peserta[100];
	
    scanf("%d", &peserta); getchar();
    scanf("%d %d %d", &jojo, &lili, &bibi); getchar();
    
    for (int i = 0; i < peserta; i++) {
        scanf("%d", &nilai_peserta[i]); getchar();
    }

    total_nilai = jojo + lili + bibi;
    for (int i = 0; i < peserta; i++) {
        total_nilai += nilai_peserta[i];
    }

    total_peserta = peserta + 3;
    rata_rata = total_nilai / total_peserta;

    if (jojo >= rata_rata) {
        printf("Jojo lolos\n");
    } else {
        printf("Jojo tidak lolos\n");
    }

    if (lili >= rata_rata) {
        printf("Lili lolos\n");
    } else {
        printf("Lili tidak lolos\n");
    }

    if (bibi >= rata_rata) {
        printf("Bibi lolos\n");
    } else {
        printf("Bibi tidak lolos\n");
    }

    return 0;
}