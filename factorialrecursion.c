#include<stdio.h>
int factorial(int);
int main(){
    int num,j,x;
    printf("Enter the number :\n");
    scanf("%d",&num);
    j=factorial(num);
    printf("Answer:%d\n",j);
    return 0;
}
int factorial(int num){
    if(num==1||num==0){
    return 1;
    }
    else{
        return(num*factorial(num-1));
    }
}