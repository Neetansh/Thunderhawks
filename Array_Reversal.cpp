#include<stdio.h>
int main()
{
int i,size,start=0,end,temp;
scanf("%d",&size);
int a[size];
end=size-1;
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
while(start<end)
{
temp=a[start];
a[start]=a[end];
a[end]=temp;
start++;
end--;
}
for(i=0;i<size;i++)
{
printf("%d ",a[i]);
}
}
