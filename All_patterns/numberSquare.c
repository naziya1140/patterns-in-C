#include<stdio.h>
int main(){
    //number square;
    int i,j,m;
    printf("enter the numbers required in the side: ");
    scanf("%d",&m);
    
     for(i=1;i<=m;i++){
        for(j=1;j<=m;j++)
        {
            printf("%d",j);
        }
printf("\n");
     }
     return 0;
}
