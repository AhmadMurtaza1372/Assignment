#include <stdio.h>
#include <math.h>
int main (){

int num,org,result=0,rem,n=0;

printf ("enter three digit num");
scanf ("%d",&num);
org=num;
while (org!=0){
    org = org/10;
    ++n;
    
}

org =num;

while (org!=0){

    rem=org%10;

    result = result+ pow (rem,n);

    org = org/10;
}

if (result==num){
    printf("ams");
}
else{
    printf("not am");
}

return 0;
}