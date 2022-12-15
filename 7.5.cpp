#include <stdio.h>
#include <stdlib.h>

int main()
{
    int para_miktari;
    int c100,c50,c20,c10;
    while (1)
    {
    printf("para miktari giriniz 10un kati bir sayi giriniz :");
    scanf("%d",&para_miktari);

    if (para_miktari%10==0)
    {

    printf("para_miktari=%d\n",para_miktari);

    c100 = para_miktari / 100;
    para_miktari = para_miktari - (c100 * 100);

    c50 = para_miktari / 50;
    para_miktari = para_miktari - (c50 * 50);

    c20 = para_miktari / 20;
    para_miktari = para_miktari - (c20 * 20);

    c10 = para_miktari / 10;
    para_miktari = para_miktari - (c10 * 10);

    printf("banknotlar-> 100luk sayisi:%d   50lik sayisi:%d   20lik sayisi:%d   10luk sayisi:%d\n", c100, c50 , c20 , c10);

    }
    else
    {
        printf("yanlis deger girdiniz 10'un kati bir deger giriniz\n ");

    }
    }

    return 0;
}

