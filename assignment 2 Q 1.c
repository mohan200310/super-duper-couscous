#include<stdio.h>
#include<string.h>

int main()
{
char p1[100];
char p2[100];
int len1,len2;
printf(" enter First string Value ");
gets(p1);
printf("enter Second string Value ");
gets(p2);
len1= strlen(p1);
len2= strlen(p2);
for( int i=0;i<=len2;i++)
{
p1[len1+i]=p2[i];
}
printf("%s \n",p1);
int len3=strlen(p1);
for(int j=len3;j>=0;j--)
{ 
printf("%c", p1[j]);
}
return 0;
}