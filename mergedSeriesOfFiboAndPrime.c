#include<stdio.h>
int main()
{
int n,i,j,a=1,b=0,flag,c;
scanf("%d",&n);
n=n/2;
for(i=2;n>0;i++)
{
flag=0;
for(j=2;j<=i;j++)
{
if(i%j==0)
{
flag++;
}
}
if(flag==1)
{
    printf("%d ",a+b);
    c=a+b;
    a=b;
    b=c;
    printf("%d ",i);
n--;
}
}
return 0;
}
