#include<stdio.h>
#include<math.h>

int main()
{
int n,swap,f,l,digits;
    printf("Enter the value");
    scanf("%d",&n);
    l=n%10;
    digits=(int)log10(n);
    f=(int)(n/pow(10,digits));
    swap=l;
    swap =swap*((int)pow(10,digits));
    swap=swap+n%((int)pow(10,digits));
    swap=swap-l;
    swap=swap+f;
    printf(" swapped number = %d",swap);
    return 0;
}