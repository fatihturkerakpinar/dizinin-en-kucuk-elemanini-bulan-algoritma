#include <stdio.h>

int en_kucuk_eleman(int eleman_sayisi) {
    int dizi[eleman_sayisi];
    int i, min;

    // Dizinin elemanlarini klavyeden oku
    for (i = 0; i < eleman_sayisi; i++) {					//T(n)=2n+2
        printf("Dizinin %d. elemanini girin: ", i+1);
        scanf("%d", &dizi[i]);
    }

    // En kucuk elemani bul
    min = dizi[0];											//T(n)=1
    for (i = 1; i < eleman_sayisi; i++) {					//T(n)=1+n+n-1=2n
        if (dizi[i] < min) {								//T(n)=n
            min = dizi[i];									
        }
    }

    // En kucuk elemani ekrana yazdir
    printf("Dizinin en kucuk elemani: %d\n", min);

    return 0;												//T(n)=1
}

int main() {
    int eleman_sayisi;

    printf("Dizinin eleman sayisini girin: ");
    scanf("%d", &eleman_sayisi);

    en_kucuk_eleman(eleman_sayisi);

    return 0;												//T(n)=1    													
															//T(n)=5n+5
}

