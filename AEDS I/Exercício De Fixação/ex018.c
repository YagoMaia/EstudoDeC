#include <stdio.h>
#include <string.h>

int main(void){
    int i, N=8;
    for(i=0; i<=10; i++){
        printf("%d x %d = %d\n", N, i, N*i);
    }
    return 0;
}