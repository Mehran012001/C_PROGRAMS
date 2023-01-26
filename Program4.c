#include<stdio.h>
int main(){
    /* Calculation of simple interest for 3 sets of p, n and r */
    // si=p*n*r/100
    float p,n,r;
    int i;
    for(i=1;i<=3;i++)
        {printf("Enter Principle Amount ");
        scanf("%f",&p);
        printf("Enter No of days:");
        scanf("%f",&n);
        printf("Enter Rate of interest:");
        scanf("%f",&r);
        float si = (p*n*r)/100;
        printf("Simple interest is :%f\n",si);}
        return 0;
}