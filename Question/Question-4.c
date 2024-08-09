#include<stdio.h>
int main(){
    float p,roi,t,si;
    printf("loan total amount: ");
    scanf("%f",&p);
    printf("\nRate of interest: ");
    scanf("%f",&roi);
    printf("\nTotal time: ");
    scanf("%f",&t);
    si = (p*roi*t)/100;
    printf("\nSimple interest: ");
    printf("%f",si);
    return 0;
}