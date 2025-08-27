#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Implementar esta função
int encontrar_maximo(int arr[], int n) {
    int maximo = 0;

    for (int i = 0; i < sizeof(arr); i++){
        if (maximo<=arr[i]){
            maximo = arr[i];
        }
    }
    return maximo;
}

// Função para medir tempo de execução
double medir_tempo(int arr[], int n) {
    clock_t inicio = clock();
    int max = encontrar_maximo(arr, n);
    clock_t fim = clock();
    return ((double)(fim - inicio)) / CLOCKS_PER_SEC;
}

int main() {
    // Testar com diferentes tamanhos
    int tamanhos[] = {10, 100, 1000, 10000};
    int num_testes = 4;
    
    for (int i = 0; i < num_testes; i++) {
        int n = tamanhos[i];
        int* arr = malloc(n * sizeof(int));
        
        // Preencher array com valores aleatórios
        for (int j = 0; j < n; j++) {
            arr[j] = rand() % 1000;
        }
        
        double tempo = medir_tempo(arr, n);
        printf("Tamanho: %d, Tempo: %f segundos\n", n, tempo);
        
        free(arr);
    }
    
    return 0;
}