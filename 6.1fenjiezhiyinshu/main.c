#include <stdio.h>
#include <stdlib.h>

int f(int num )
{
    int sum=0;
    int i;
    for(i=1;i<num;i++)
    {
     if (num%i==0)
        sum +=i;

    }
    if (sum==num)
        return 1;
    else
        return 0;
}
int main()
{
	int n,m,i;
	int cnt=0;
	scanf("%d %d",&n,&m);
	for (i=n;i<=m;i++)
    {

       if(f(i))
       {printf(" %d",i);
       cnt++;}
    }
    if (cnt==0)
        printf("wu");
	return 0;
}

