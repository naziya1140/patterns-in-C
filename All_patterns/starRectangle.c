#include<stdio.h>
int main(){
    //star rectangle;
    int i,j,m,n;
    printf("enter the number of lines: ");
    scanf("%d",&m);
    printf("enter the number of columns: ");
    scanf("%d",&n);
     
     for(i=1;i<=m;i++){
        for(j=1;j<=n;j++)
        {
            printf("* ");
        }
printf("\n");
     }
     return 0;
}
