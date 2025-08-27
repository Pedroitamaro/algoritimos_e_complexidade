#### Código Base (Python):
import time
import random

def encontrar_maximo(lista):
    """
    Encontra o maior elemento em uma lista
    
    Args:
        lista: Lista de inteiros
        
    Returns:
        int: Maior elemento da lista
    """
    maximo = 0
    for inteiro in lista:
        if maximo < inteiro:
            maximo = inteiro
    return maximo

def medir_tempo(lista):
    """Mede o tempo de execução do algoritmo"""
    inicio = time.time()
    maximo = encontrar_maximo(lista)
    fim = time.time()
    return fim - inicio

def main():
    # Testar com diferentes tamanhos
    tamanhos = [10, 100, 1000, 10000]
    
    for n in tamanhos:
        # Criar lista com valores aleatórios
        lista = [random.randint(0, 999) for _ in range(n)]
        
        tempo = medir_tempo(lista)
        print(f"Tamanho: {n}, Tempo: {tempo:.6f} segundos")

if __name__ == "__main__":
    main()
