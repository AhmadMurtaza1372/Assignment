#include <stdio.h>

int main (){
  int i,n;
  printf("enter the number of elements");
  scanf("%d",&n);

    int arr [n];
    printf("enter the numbers:");
    for (i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

     for (i=0;i<n;i++){
    printf("%d",arr[i]);
    }
    
return 0;
}