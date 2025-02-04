#include<stdio.h>
int main(){
    //print the factorial in limit;
    int n,fact=1;
    printf("enter the upper limit of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
         printf("the factorial of %d is %d\n",i,fact);
    }
   
}
    
