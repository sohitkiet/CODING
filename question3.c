#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5,percentage;
    printf("Enter marks: ");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    {
    if (sub1<=100&sub2<=100&sub3<=100&sub4<=100&sub5<=100)
    {
        printf("fetching\n");
    }
    else{
    printf("NOTE:Enter marks is not correct\n");
    }
    }
    percentage=(sub1+sub2+sub3+sub4+sub5)*100/500;
    if(percentage>100)
    {
        printf("NOTE:Error showing in percentage\n");
    }
    if(percentage>=60&percentage<=100)
    printf("First division\n");
    else 
    {
        if(percentage>=50)
        printf("Second division\n");
        else{
            if (percentage>=40)
            printf("Third division\n");
            else
            printf("Fail\n");
        }
    }
return 0;
}