// greater among 3 numbers
#include<stdio.h>
int main(){
    
    int a,b,c;               
    printf("Enter a,b,c values :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is greater than b and c\n");
    }
    if(b>a && b>c){
     printf("b is greater than a and c\n");
    }
    if(c>a && c>b){
     printf("c is greater than a and b\n");
    } 
    return 0;
}

    
 // even or odd 
#include<stdio.h>
int main(){
    int d;                          
    printf("Enter d value :\n");
    scanf("%d",&d);
    if(d%2==0){
        printf("Even number!\n");
    }
    else{
        printf("Odd number!\n");
    }
return 0;
}


// leap year 
#include<stdio.h>
    int year;                        
    printf("Enter the year:\n");
    scanf("%d",&year);
    if(year%4==0){
        printf(" Is a leap year\n");
    }
    else{
        printf("Not a leap year\n");
    }
return 0;
}


 // calculator using switch case
#include<stdio.h>
    int e,f;                        
    int choice;
    printf("Enter e and f values:\n");
    scanf("%d%d",&e,&f);
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("ans is:%d\n",e+f);
               break;
        case 2: printf("ans is:%d\n",e*f);
               break;

        case 3: printf("ans is:%d\n",e/f);
               break;

        case 4: printf("ans is:%d\n",e-f);
               break;

        case 5: printf("ans is:%d\n",e%f);
               break;

        default:
          printf("Invalid choice\n");
    }
return 0;

 // find prime number
  #include<stdio.h>
int main(){
          int g;                    
          printf("Enter g value:\n");
          scanf("%d",&g);
          if((g%2)!=0){
          printf("It is a prime number:\n");
          }
          else{
            printf("It is not a prime number:\n");
          }


        char chr;                      // print characters 
           printf("Enter the character:\n");
           scanf("%s",&chr);
        if(chr >='a' && chr <='z' ){
          printf("Small alphabets or letters\n");
        }
        if(chr >='A' && chr <='Z'){
           printf("Capital letters or alphabets\n");
        }

        else{
             printf("Invalid character!\n");
           }
    return 0;
}


// check weather the person eligible for vote or not
#include<stdio.h>
int main(){
int age;            
printf("Enter age of the person":\n);
scanf("%d",&age);
if(a>=18)
prntf("Eligible for vote\n");
else
printf("Not eligible for vote\n");


return 0;
    }
    
    

