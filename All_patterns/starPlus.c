#include<stdio.h>
int main(){
    int i,n,j;
  
    printf("enter the number of lines: ");
    scanf("%d",&n);
      int x=(n/2)+1;
    for(i=1;i<=n;i++){
   
        for(j=1;j<=n;j++){
        if(i==x||j==x)
            {
            printf("*");
            }

        else
        {
            printf(" ");
        }     
        }
        printf("\n");
    }
    return 0;
}
