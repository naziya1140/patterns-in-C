#include<stdio.h>
int main(){
    int i,j,k,n;
printf("enter the number of lines: ");
scanf("%d",&n);
for(i=1;i<=2*n-1;i++)
printf("%c",i+64);
printf("\n");

for(i=1;i<=n;i++){
    int nsp=2*i-1;
    int count=65;
    for(j=1;j<=n-i;j++)
    {
        printf("%c",count);
        count++;
    }
   
    for(k=1;k<=nsp;k++){
        printf(" ");
        count++;
    }
    nsp=nsp+2;

    for(j=1;j<=n-i;j++){
        printf("%c",count);
        count++;
        
    }
    
    printf("\n");
}
}