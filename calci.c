#include<stdio.h>

int main (){

int a,b;
char op;

printf ("enter the numbers");
scanf("%d",&a);
printf ("enter the another numbers");
scanf("%d",&b);
printf ("enter the operator");
scanf(" %c",&op);

switch (op) {

    case '+' :
    printf("The sum is %d",a+b);
    break;
    case '-' :
    printf("The sum is %d",a-b);
    break;
    case '*' :
    printf("The sum is %d",a*b);
    break;
    case '/' :
    printf("The sum is %d",a/b);
    break;
    default:
    printf ("wrong op");

}
return 0;

}


