#include <stdio.h>

void soma_vetores(int *vet1, int *vet2, int *resultado, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vet1[i] + vet2[i];
    }
}

int main() {
    int tamanho;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int vet1[tamanho], vet2[tamanho], resultado[tamanho];

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vet1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vet2[i]);
    }

    soma_vetores(vet1, vet2, resultado, tamanho);

    printf("Vetor de soma:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
