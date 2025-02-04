#include<stdio.h>
int main(){
    int n,r=0,sum,x;
    //wap to write the reverse of a number and sum of the given number of the number and the reversed number;
printf("enter a number:  ");
scanf("%d",&n);
x=n;
while(n!=0){

r=r*10;
r = r + n%10;
n=n/10;

}
sum = x+r;
printf("the reverse of the number is %d\n",r);
printf("sum of the number is %d",sum);

return 0;
}
