#include<stdio.h>
int main(){
    int i,n;
    int j;
    printf("enter the number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=i;j++){
            printf("%c",a+64);
            a++;
        }
        printf("\n");
    }
}