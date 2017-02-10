#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("input num");
    int i,n;
    double sum=0.0;
    double sign=1.0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum=sum+sign*1/i;
        sign=-sign;

    }
    printf("%f",sum);

    return 0;
}
