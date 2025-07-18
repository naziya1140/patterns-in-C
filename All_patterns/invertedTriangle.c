#include<stdio.h>
int main(){
    //number square;
    int i,j,n;
    
    printf("enter the numbers of lines of triangle : ");
    scanf("%d",&n);
    int a=n;
    
     for(i=1;i<=n;i++){
        for(j=1;j<=a;j++)
        {
            printf("*");
        }
        a--;

printf("\n");
     }
    
     return 0;
}