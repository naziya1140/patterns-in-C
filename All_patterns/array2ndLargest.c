#include<stdio.h>
#include<limits.h>
int main(){
    //find the 2nd largest of the elements of array
    int arr[8]={-1,-4,-7,-3,-9,-6,-5,-3};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<8;i++)
{
    if(max<arr[i])
    {
        max=arr[i];
    }


    if(smax<arr[i] && max!=arr[i])
    {
        smax=arr[i];
    }
}

printf("%d\n",max);
printf("%d",smax);
}
