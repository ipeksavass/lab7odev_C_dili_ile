#include <stdio.h>
#include <stdlib.h>
#define PI 3.14


int main()
{
  int r,tur;  /*r=yaricap, tur=islem turu */
  double cevre,alan;
  printf("bir r degeri giriniz :");
  scanf("%d",&r);
  printf("bir tur giriniz(1=cevre, 2=alan):");
  scanf("%d",&tur);

  if (tur==1)
  {
    cevre = 2 * PI * r;
    printf("%.2lf",cevre);
  }

   else
       if(tur==2)
   {
       alan = PI * r * r;
       printf("%.2lf",alan);
   }
       else
    {
	      printf("yanlis giris");
    }
    
   return 0;
}

