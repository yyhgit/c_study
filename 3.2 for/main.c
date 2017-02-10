#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("input num [0,100000]:");
    int num,sz;
    int sw=0;
    int out=0;
    int exp=1;
    scanf("%d",&num);

   for (;0<num && num <=1000000;num = num/10,exp=exp*2)
   {
       sz = num%10;
       sw++;
       if(sz%2 == sw%2)
       {
        out = out+exp;
       }
        else
        {
        out=out+0;
        }
   }
   printf("%d",out);
    return 0;
}
