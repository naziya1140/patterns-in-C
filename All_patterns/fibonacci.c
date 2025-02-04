#include<stdio.h>
int main(){
int i=1,n, n1=0 ,n2=1 ,fib;
//enter the fibonacci number 
printf("enter the number n:  ");
scanf("%d",&n);
while(i<=n){
if(n=1)
{
fib=1;
}
else
{
    fib=n1+n2;
    n1=n2;
    n2=fib;
    i++;
}
}
return 0;
}