#include <stdio.h>

/* using returning value*/

int inc(x){
    x += 1;
    return x;
}

int main(){

    int a = 3;

    
    
    a = inc(a);

    printf("%d\n", a);

    a = inc(a);

    printf("%d\n", a);
    return 0;
}
