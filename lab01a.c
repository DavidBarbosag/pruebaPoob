#include <stdio.h>
#include <stdlib.h>

int main(void){
        int n;
        int p;
        p = 0;
        scanf("%d", &n);
        while(p < n){
                int x;
                int y;
                int resultado;
                scanf("%i",&x);
                scanf("%i",&y);
                resultado = x + y;
                printf("%i \n",resultado);
                p++;
                        }

        return EXIT_SUCCESS;
        }