#include<stdio.h>
int main(){
    int i,j,k,n;
   
    printf("enter the value of n: ");
    scanf("%d",&n);
     int x=(n/2);
    int nsp=n/2;
    int nst=1;
    for(i=1;i<=n;i++){
        
       
        for(j=1;j<=nsp;j++){
            printf(" ");
        }
        for(k=1;k<=nst;k++)
            printf("*");    
        
        if(i<x){
        nst+=2;
        nsp--;
        printf("\n");
        }
        else{
          nst-=2; 
          nsp++;
        printf("\n");
    }
        
    }
}
        
    
