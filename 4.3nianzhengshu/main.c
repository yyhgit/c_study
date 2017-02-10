#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("input num [-100000,100000]:\n");
    char  a[10][6]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int num;
    int dao=1;
    int res,t;
    scanf("%d",&num);
    t=num;
    while(num/10!=0)
    {

       // dao=num%10;
        //printf("%d",dao);
       // if (num/10!=0) printf("_");
        num=num/10;
        dao=dao*10;
       // printf("%d\n",dao);
    }
    while(dao!=0)
    {
        res=t/dao;
        t=t%dao;
        dao=dao/10;
        printf("%s ",a[res]);



    }
    return 0;
}
