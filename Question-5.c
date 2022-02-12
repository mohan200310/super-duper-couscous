#include<stdio.h>

int main()
{
    float radious, pie=3.142;
    printf("enter the radious of the circle:\n");
    scanf("%f",&radious);
    printf("diameter of the circle is %f\n",2*radious);
    printf("circumference of the circle is %f\n",2*pie*radious);
    printf("area of the circle is %f\n",pie*radious*radious);
    return 0;
}