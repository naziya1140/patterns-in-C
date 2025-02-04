#include<stdio.h>
int main(){
    int i,j,k,l,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i++){
    printf("*");
    }
    printf(
        "\n"
    );
    
    for(i=1;i<=n;i++){
        int nsp=2*i-1;
        for(j=i;j<=n;j++)
        printf("*");
        for(k=1;k<=nsp;k++)
        printf(" ");
        nsp=nsp+2;
     for(j=i;j<=n;j++)
     printf("*");
     printf("\n");

    }

}