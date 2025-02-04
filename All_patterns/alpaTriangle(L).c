#include<stdio.h>
int main(){
    int i,n,j,k;
  
    printf("enter the number of lines: ");
    scanf("%d",&n);
      
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(k=1;k<=i;k++){
            printf("%c",a+64);
            a++;
        }
 printf("\n");

    }
    return 0;
}
