#include <stdio.h>
#include <stdlib.h>

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
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (valores[i] > valores[j]) {
                float temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp;
            }
        }
    }
    printf("Valores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", valores[i]);
    }
    free(valores);

    return 0;
}
