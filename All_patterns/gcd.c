#include<stdio.h>
int minimum(int a,int b){
if(a>=b){
    return b;
}
else
   return a;
}
 
int gcd(int a,int b){
    int hcf;
    for(int i=minimum(a,b);i>=1;i--){
        if(a%i==0 && b%i==0)
       {
         hcf=i;
         break;
       }
    }
return hcf;
    
}

int main(){
    int a,b;
    printf("enter the first number:  ");
    scanf("%d",&a);
      printf("enter the second number:  ");
    scanf("%d",&b);
    int x=gcd(a,b);
    printf("the hcf of the number is %d",x);  
}

