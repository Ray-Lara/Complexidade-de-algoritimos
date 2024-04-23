#include <iostream>

using namespace std;

bool estaOrdenadoCrescente(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        // Se algum elemento atual for menor que o anterior, o vetor não está ordenado
        if (vetor[i] < vetor[i - 1])
            return false;
    }
    // Se não encontrarmos nenhum elemento desordenado, o vetor está ordenado
    return true;
}

int main() {
    int A[] = {2, 5, 8, 10, 13, 17, 21};
    int tamanho = sizeof(A) / sizeof(A[0]);

    if (estaOrdenadoCrescente(A, tamanho))
        cout << "O vetor está ordenado." << endl;
    else
        cout << "O vetor não está ordenado." << endl;

    return 0;
}
