#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a=0,x,y,z,b;
    printf("������һ��������λ����a=");
    scanf("%d",&a);
    x=a%10;
    y=a/10%10;
    z=a/100;
    b=x*100+y*10+z;
    printf("b=%d",b);
    return 0;
}
