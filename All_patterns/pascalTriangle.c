#include<stdio.h>

    int factorial(int x)
    {   int fact=1;
        int e;
        for(e=1;e<=x;e++)
        fact=fact*e;
        return fact;
    }

    int combination(int n,int r){
        int ncr=factorial(n)/(factorial(r)*factorial(n-r));
        return ncr;
    }

int main(){
    int i,j,k,m;
    printf("enter the number of lines: ");
    scanf("%d",&m);


    for(i=0;i<=m;i++){
        for(k=1;k<=m-i;k++)
        printf(" ");
        for(j=0;j<=i;j++){
            int combo=combination(i,j);
        printf("%d ",combo);
        }
printf("\n");
    }
    return 0;
}