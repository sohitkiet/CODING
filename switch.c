#include<stdio.h>
int main(){
    int n;
    printf("Enter valid number:");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Shivji Thakur");
        break;
        case 2:
        printf("Surender Thakur");
        break;
        case 3:
        printf("Prabhuji Thakur");
        break;
        case 4:
        printf("Munna Thakur");
        break;
        case 5:
        printf("Santosh Thakur");
        break;
        default:
        if(n>=7){
            printf("Invalid");
            break;
        }
       

    }
    return 0;
}