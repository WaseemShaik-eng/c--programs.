#include<stdio.h>    // print something using function
void printHello();
void printGit();
int main(){

 printHello();
 printGit();

 return 0;
}
void printHello(){
printf("Hello world!\n");
}
void printGit(){
printf("Github!\n");
}



#include<stdio.h>                   // sum of two numbers
int sum(int a,int b);
int main(){
int a,b;
printf("Enter a and b values\n");
    scanf("%d%d",&a,&b);
    printf("%d",sum(a,b));
}

int sum(int a,int b){
    
    return a+b;
    
}



#include<stdio.h>  
int factorial(int n);          // factorial of n numbers
int main()
{
 int n;
    
    printf("Enter a number:");
    scanf("%d",&n);
    
    printf("factorial is:%d",factorial(n));
    
    return 0;
}
    int factorial(int n) {
        int fact=1;
    int i;
    
    for(i=1;i<=n;i++){
      fact=fact*i;
    }
    return fact;
}



#include<stdio.h>  
int fibonacci(int n);          // fibonacci series of n numbers
int main()
{
 int n;
    
    printf("Enter a number:");
    scanf("%d",&n);
    
    printf("fibonacci is:%d",fibonacci(n));
     return 0;
}
    int fibonacci(int n) {
    int i;
    int a=0,b=1,c;
    if(n==0)
    return 0;
    
    if(n==1)
        return 1;
    
    for(i=1;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}


#include<stdio.h>
int sumNm(int n);
int main(){               // sum of first n natural numbers
  printf("Sum is:%d",sumNm(5));
    return 0;
}
int sumNm(int n){
    if(n==1){
    return 1;
    }
int sumNm1=sumNm(n-1);
int sumNm2=sumNm1+n;
 return sumNm2;
}
