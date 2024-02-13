#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float a;
    float b;
    float resultado = 0.0;
    scanf("%d", &n);
    int cont;
    cont = 0;

    while (cont < n) {
        char op;
        scanf(" %c", &op);
        switch (op){
            case '+':
                scanf("%f %f", &a, &b);
                resultado = a + b;
                break;
            
            case '-':
                scanf("%f %f", &a, &b);
                resultado = a - b;
                break;

            case '*':
                scanf("%f %f", &a, &b);
                resultado = a * b;
                break;
            
            case '/':
                scanf("%f %f", &a, &b);
                resultado = a / b;
                break;

            default:
                resultado = 0.0;
                break;
        }
        printf("%f\n",resultado);
        cont = cont + 1;
    }

    return 0;
}