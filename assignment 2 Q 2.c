#include<stdio.h>

int main()
{
  int a,sum1=0,sum2=0;
for(int i=1;i<=10;i++)
{
printf("enter the first number %d",i);
scanf("%d",&a);
if(a%2==0)
sum1= sum1+a;
else
sum2 = sum2+a;
}
printf("sum of even numbers is %d \n",sum1);
printf("sum of odd numbers is %d",sum2);
return 0;

}