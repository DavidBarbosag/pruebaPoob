#include <stdio.h>
#include <stdlib.h>
int main(){
int n;
scanf("%d",&n);
float  x;
float y;
int cont;
cont = 0;
float resultado;
while(cont < n){
        scanf("%f",&x);
        scanf("%f",&y);
        if(x<y){
                resultado = y;
        }
        else{
                resultado = x;
        }
        printf("%f\n", resultado);
        cont = cont + 1;
        }
return EXIT_SUCCESS;
}
