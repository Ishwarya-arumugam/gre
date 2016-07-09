#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={0,1,2,3,4,5,6,7,8,9},i,b;
b=a[0];
for(i=1;i<10;i++)
{
if(a[i]>b)
{
b=a[i];
}
}
printf("%d",b);
getch();
}

