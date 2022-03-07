#include<stdio.h>

int main()
{
    printf("enter A");
    int n;
    scanf("%d",&n);
    int a=0,b=1,c=0;
    printf("%d \n",a);
    printf("%d \n",b);
    for(int l=1;l<=n-2;l++)
    {

    c=a+b;

    printf("%d \n",c);
    a=b;
    b=c;
    }
    return 0;
}