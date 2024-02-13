#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i;

    scanf("%d", &n);
    float vec[2000];
    int cont;
    int cont2;

    cont = 0;

    while (cont < n) {
        int size;
        float resultado;
        scanf("%d", &size);
        cont2 = 0;

        while (cont2 < size) {
            float valor;
            scanf("%f", &valor);
            vec[cont2] = valor;
            cont2 = cont2 + 1;
        }

        resultado = vec[0];

        for (i = 1; i < size; i++) {
            if (vec[i] < resultado){
                resultado = vec[i];
            }
        }
        printf("%f\n", resultado);
        cont = cont + 1;
    }

    return 0;
}
