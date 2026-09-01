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
