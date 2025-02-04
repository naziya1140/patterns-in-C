#include<stdio.h>
int main(){
    int i,n,j,k;
  
    printf("enter the number of lines: ");
    scanf("%d",&n);
      
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
        printf(" ");
        int a=2*i-1;
        for(k=1;k<=a;k++){
            printf("*");
             
        }
 printf("\n");

    }
    return 0;
}
