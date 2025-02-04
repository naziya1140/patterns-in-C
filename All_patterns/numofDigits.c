#include<stdio.h>
int main(){
//wap to find the sum of the even digits
int n,count=0,r,x=0;
printf("enter the number: ");
scanf("%d",&n);
while(n>0)
{
r=n%10;
n=n/10;
if(r%2==0)
{
x=x+r;
}
count++;
printf("the sum of digits %d",x);
}
return 0;
}