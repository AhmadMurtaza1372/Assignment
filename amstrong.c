#include <stdio.h>
int main (){

int n,org,result=0,rem;

printf ("enter three digit num");
scanf ("%d",&n);
org=n;
while (org!=0){

    rem=org%10;

    result = result+ rem*rem*rem;

    org = org/10;
}

if (result==n){
    printf("ams");
}
else{
    printf("not am");
}

return 0;
}