#include<stdio.h>

int main()
{
    float a, b;
    printf("enter two numbers:\n");
    scanf("%f %f",&a,&b);
    switch(a && b) {
    case 1:
        printf("sum is %f\n",a+b);
    case 2:
        printf("difference is %f\n",a-b);
    case 3:
        printf("product is %f\n",a*b);
    case 4:
        printf("devision is %f\n",a/b);
    }

    return 0;
}