#include <stdio.h>

int hail(int n){
    
    if(n%2==0 && n>1){
        printf("%d\n", n);
        return hail(n/2);
    }

    if(n%2!=0 && n>1){
        printf("%d\n", n);
        return hail(3*n+1);
    }
}

int main(){

    int num;
    scanf("%d", &num);
    hail(num);
    return 0;
}
