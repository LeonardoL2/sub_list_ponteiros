#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    float *float_a = (float *)a;
    float *float_b = (float *)b;
    if (*float_a > *float_b) {
        return 1;
    } else if (*float_a < *float_b) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    printf("Quantos valores você deseja inserir? ");
    scanf("%d", &n);

    float *valores = (float *)malloc(n * sizeof(float));
    if (valores == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    printf("Digite %d valores float:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }

    qsort(valores, n, sizeof(float), comparar);

    printf("Valores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", valores[i]);
    }

    free(valores);

    return 0;
}
