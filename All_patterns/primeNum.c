#include<stdio.h>
int main(){
    int n,i,count=1;
    //to check if a number is prime or not
    printf("enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
    for(i=1;i<=n;i++)
    {
        n%i==0;
        count++;
    }
    }

    if(count==2)
        printf("the number is prime\n");
    
    else 
    printf("the number is composite\n");
    
    
    
}