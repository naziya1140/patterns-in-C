#include<stdio.h>
int main(){
    //number square;
    int i,j,m;
    printf("enter the numbers of lines of triangle : ");
    scanf("%d",&m);
    
     for(i=1;i<=m;i++){
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
printf("\n");
     }
     return 0;
}
