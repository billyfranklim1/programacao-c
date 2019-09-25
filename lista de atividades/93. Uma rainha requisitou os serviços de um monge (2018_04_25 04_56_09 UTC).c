#include <stdio.h>

    int main(){
    int i;

    for (i=1;i<=64;i=i*2)
        printf(" i = %d\n", i);

        i = i+i;
        printf(" o total de grãos que o monge recebeu foi de: %d\n", i);


    return 0;
    }
