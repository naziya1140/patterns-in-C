#include<stdio.h>
int main(){
    int i,n,j;
  
    printf("enter the number of lines: ");
    scanf("%d",&n);
      int x=(n/2)+1;
    for(i=1;i<=n;i++){
   
        for(j=1;j<=n;j++){
        if(i==1||j==6||i==4||j==1)
            {
            printf("* ");
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
