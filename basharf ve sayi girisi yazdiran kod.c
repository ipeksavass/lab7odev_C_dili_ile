#include <stdio.h>
#include <stdlib.h>

 int main()
 {
     char basharf;
     int ilksayim;
     double ikincisayim;

     printf("Lutfen isminizin basharfini giriniz\n");
     scanf("%c",&basharf);

     printf("Lutfen bir tam sayi giriniz\n");
     scanf("%d",&ilksayim);

     printf("Lutfen bir ondalik sayi giriniz\n");
     scanf("%lf",&ikincisayim);

     printf("Isminizin basharfi:%c   Ilk sayim:%d   Ikinci sayim:%.3lf", basharf, ilksayim, ikincisayim);

     return 0;
 }

