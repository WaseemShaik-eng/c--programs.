// basic pointer program
#include<stdio.h>
int main(){

int a=62;
int *ptr=&a;
int _a=*ptr;
printf("%d",_a);
    return 0;
}

// find output
#include<stdio.h>   
int main(){
    int *ptr;
    int x;
    
    ptr=&x;
    *ptr=0;
    printf("%d\n",x);
    printf("%d\n",*ptr);

    *ptr +=5;
    printf("%d\n",x);
    printf("%d",*ptr);

    (*ptr)++;
    printf("%d\n",x);
    printf("%d",*ptr);

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



// swap two numbers using pointers
#include <stdio.h>
void printswap(int *a, int *b);

int main(void) {
    int a = 3, b = 5;

    printswap(&a, &b);  // call reference
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void printswap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
