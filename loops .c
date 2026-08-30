#include<stdio.h>            // factorial of n numbers
int main()
{
    int fact=1
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("factorial is:%d\n",fact);

    return 0;
}
#include<stdio.h>              // print n numbers
int main(){

int i,n;
printf("Enter n value:\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
    printf("%d\n",i);
}
    return 0;

}

#include<stdio.h>               // print n reverse numbers
int main(){

int i,n;
printf("Enter n value:\n");
scanf("%d",&n);
for(i=n;i>=1;i--){
    printf("%d\n",i);
}
    return 0;

}



#include <stdio.h>        // print multiple of n numbers
int main(){

int i,n;
printf("Enter n value:\n");
scanf("%d",&n);
printf("multiplication is:%d\n",n);
for(i=n;i<=10;i++){
    printf("%d\n",n*i);
}
    return 0;

}


 
