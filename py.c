#include<stdio.h>
int main (){
int n,i,s,j;
printf("enter the rows");
scanf("%d",&n);

for (i=0;i<(n+1)/2;i++){

    for (s=i;s<(n+1)/2;s++){

        printf(" ");
    }

    for ( j= 0;j<2*i+1; j++)
    {
        printf("*");
        
    }
    printf("\n");   
}


for (i=n/2;i>0;i--){

    for (s=i;s<=n/2;s++){

        printf(" ");
    }

    for (j=0;j<2*i-1;j++)
    {
        printf("*");
        
    }
    printf("\n");   
}



return 0;

}