#include <stdio.h>

int facto (int k);

int main (){
    int n;
    printf ("Enter the number whose facto you need");
    scanf ("%d",&n);


    printf("the facto of given number is %d",facto(n));

}
int facto (int k){

    if (k>1){

        return k *facto(k-1);
    }
    return 1;


}