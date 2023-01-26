              // Display this GP - 3,12,48.. upto ‘n’ terms
#include<stdio.h>
int main(){
    int i,n,a=3;
    printf("Enter the number of terms to be printed:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
   { printf("%d ",a);
    a=a*4;}
    return 0;
}