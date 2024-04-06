#include <stdio.h>

typedef int (*Comparador)(const void *, const void *);

int comparar_int(const void *a, const void *b) {
    const int *int_a = (const int *)a;
    const int *int_b = (const int *)b;
    return (*int_a - *int_b);
}

void ordenar(int *array, int tamanho, Comparador comparador) {
    for (int i = 1; i < tamanho; i++) {
        int chave = array[i];
        int j = i - 1;
        while (j >= 0 && comparador(&array[j], &chave) > 0) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = chave;
    }
}

int main() {
    int valores[] = {5, 2, 9, 1, 6, 3};
    int tamanho = sizeof(valores) / sizeof(valores[0]);

    ordenar(valores, tamanho, comparar_int);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}

