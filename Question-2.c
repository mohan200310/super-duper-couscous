#include<stdio.h>

int main()
{
    float a, b;
    printf("enter two numbers:\n");
    scanf("%f %f",&a,&b);
    if(a>b) {
        printf("%f is greater",a);
    }
    else {
        printf("%f
         is greater",b);
    }
    return 0;
}