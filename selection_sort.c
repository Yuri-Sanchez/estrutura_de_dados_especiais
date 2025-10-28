#include <stdio.h>

void selectionSort(int vetor[], int n){
    int i, j, min, temp;
    for (i = 0; i < n-1; i++){
        min = i;
        for (j = i + 1; j < n; j++){
            if(vetor[j] < vetor[min]){
                min = j;
            }
        }
        temp = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = temp;
    }
}

int main (){
    int n, i;

    printf("Digite o numero de elementos:");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os %d elementos:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor antes da ordenacao:\n");
    for(i = 0; i < n;i++){
        printf("%d", vetor[i]);
    }

    selectionSort(vetor, n);

    printf("\n\nVetor apos a ordenacao (Selection Sort):\n");
    for(i = 0; i < n; i++){
        printf("%d", vetor[i]);
    }

    printf("\n");
    return 0;
}