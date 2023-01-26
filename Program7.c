#include<stdio.h>
int main(){
    // print any table taking input from user
    int i,n;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    printf("%d*%d=%d  ",n,i,n*i);



    return 0;
}