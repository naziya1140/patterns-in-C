#include<stdio.h>
int main(){
    //star rectangle;
    int i,j,m;
    printf("enter the number of stars in the side: ");
    scanf("%d",&m);
    
     for(i=1;i<=m;i++){
        for(j=1;j<=m;j++)
        {
            printf("*");
        }
printf("\n");
     }
     return 0;
}
