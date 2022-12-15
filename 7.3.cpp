#include <stdio.h>
#include <stdlib.h>

 int main()
{
     int x="ogrencino", y="vizenotu", z="finalnotu", q="gecme notu";

     printf("verileri giriniz :");
     scanf("%d",&x);
     scanf("%d",&y);
     scanf("%d",&z);

     q = y * 0.40 + z * 0.60;
     printf("%d %d", x,q);

     return 0;
}
