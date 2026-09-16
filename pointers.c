// basic pointer program
#include<stdio.h>
int main(){

int a=62;
int *ptr=&a;
int _a=*ptr;
printf("%d",_a);
    return 0;
}


// sum of two numbers using pointer method
#include<stdio.h>     
void sum(int *x, int *y);
int main(){
    int a=3,b=5;
    sum(&a,&b);  // call by reference
    return 0;
}

void sum(int *x,int *y){
    int result=*x+*y;
    printf("sum is:%d\n",result);
}
