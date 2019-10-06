#include<stdio.h>
int main()
{
int i,a,r=0;
scanf("%d",&a);
while(a>0)
{
r=r*10+a%10;
a/10;}
printf("%d",r);
return 0;
}
