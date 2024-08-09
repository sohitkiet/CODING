#include<stdio.h>
int main(){
    int x;
    printf("True or False: ");
    scanf("%d",&x);
    printf("1 and 0 is True and false respectivelly: %d",x % 2 == 0);
    return 0;
}