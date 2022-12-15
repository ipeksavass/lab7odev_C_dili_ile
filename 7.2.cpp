#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("a ve b sayisini giriniz :");
    scanf("%d",&a);
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("%d %d", a,b);

    return 0;
}

