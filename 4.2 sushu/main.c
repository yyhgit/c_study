#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("input n and m");
    int n,m,cnt=0;
    int sum=0;
    int x=2;
    scanf("%d" "%d",&n,&m);
    while(cnt<=m)
{
        int i;
        int isprime=1;
        for(i=2;i<x;i++)
        {
            if (x%i==0)
            {
                isprime=0;
                break;
            }
        }
        if (isprime==1)
        {
            cnt++;
            if(cnt>=n&&cnt<=m) sum=sum+x;
        }
            x++;
    }
    printf("%d",sum);
    return 0;
}
