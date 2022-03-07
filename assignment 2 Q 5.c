#include <stdio.h> 
int main() 
{
 int a[2][2], b[2][2], sum[2][2],prod[2][2], i, j,k,s=0;
printf("\nEnter elements of 1st matrix "); 
for (i = 0; i < 2; ++i) 
for (j = 0; j < 2; ++j) 
{ 
printf("Enter element %d%d: ", i + 1, j + 1); 
scanf("%d", &a[i][j]);
 }
 printf("Enter elements of 2nd matrix:\n"); 
for (i = 0; i < 2; ++i) 
for (j = 0; j < 2; ++j) 
{ 
printf("Enter element %d%d: ", i + 1, j + 1);
 scanf("%d", &b[i][j]); 
}
for( i=0;i<2;++i)
for (j = 0; j <2; ++j)
 {
 sum[i][j] = a[i][j] + b[i][j];
 } 
printf("\nSum of two matrices "); 
for (i = 0; i < 2; ++i)
{
 for (j = 0; j < 2; ++j) 
{
 printf("%d ", sum[i][j]); 
if (j == 1)
 { 
printf("\n\n"); 
} 
}
}
for( i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
prod[i][j]=0;
for(k=0;k<2;k++)
{ 
prod[i][j]=prod[i][j]+ a[i][j]*b[j][k];
}
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d", prod[i][j]);
if(j==1)
{
printf("\n");
}
} 
}
return 0; 
}