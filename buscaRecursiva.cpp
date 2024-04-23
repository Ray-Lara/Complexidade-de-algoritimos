#include <iostream>
using namespace std;

int sequentialSearchRecursive(int vetor[], int x, int index, int tam) {
    // Se o índice for maior ou igual ao tamanho do vetor, significa que o elemento não foi encontrado
    if (index >= tam)
        return -1;

    // Se o elemento atual for igual a x, retorna o índice
    if (vetor[index] == x)
        return index;

    // Chama a função recursivamente para o próximo elemento
    return sequentialSearchRecursive(vetor, x, index + 1, tam);
}

int main() {
    int A[] = {2, 5, 8, 10, 13, 17, 21};
    int X = 19;
    int tam = sizeof(A) / sizeof(A[0]); //tamanho do vetor

    int index = sequentialSearchRecursive(A, X, 0, tam);
    if (index != -1)
        cout << "O valor " << X << " foi encontrado no índice " << index << endl;
    else
        cout << "O valor " << X << " não foi encontrado no vetor." << endl;

    return 0;
}
