#include<stdio.h>

int sum(int a,int b){
    
    return a+b;

}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int main(){
    int choice;
    printf("Enter the choice: ");
    scanf("%d",&choice);
    int x,y;
    if(choice<5){
     printf("Enter two number: ");
    scanf("%d%d",&x,&y);
    }
    else{
        printf("enter the correct num"); ''
    }
    if(choice==1){
        printf("%d",sum(x,y));
        
    }
    else if(choice==2){
            printf("%d",sub(x,y));
        }
    else if(choice==3){
        printf("%d",mul(x,y));
    }
    else if(choice==4){
        printf("%d",div(x,y));
    }
    
    else{
        printf("enter the valid number !!");
    }

    
    return 0;
}