#include<stdio.h>
int fun(int* x,int* y){
    sum=*x+*y;
    return sum;
}
int main(){
  int a=7;
  int b=8;
  int* p1=&a;
  int* p2=&b;
  fun(p1,p1);
}