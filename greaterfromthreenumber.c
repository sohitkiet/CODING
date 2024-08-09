#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter any number x :");
    scanf("%d",&x);
    printf("Enter any number y :");
    scanf("%d",&y);
    printf("Enter any number z :");
    scanf("%d",&z);
    if(x>y && x>z)
    {
        printf("Greatest number among them is :%d\n",x);
    }
    else if(y>x && y>z){
    printf("Greatest number among them is :%d\n",y);
    }
     else 
    {
        printf("Greatest number among them is :%d\n",z);
    }
    return 0;

    
}