#include <iostream>
using namespace std;

int buscaBinariaIterativa(int vetor[], int tamanho, int alvo) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Se o elemento do meio for igual ao alvo, retorna o índice
        if (vetor[meio] == alvo)
            return meio;

        // Se o elemento do meio for menor que o alvo, a busca continua na metade direita
        else if (vetor[meio] < alvo)
            esquerda = meio + 1;

        // Se o elemento do meio for maior que o alvo, a busca continua na metade esquerda
        else
            direita = meio - 1;
    }

    // Se o elemento não for encontrado, retorna -1
    return -1;
}

int main() {
    int A[] = {2, 5, 8, 10, 13, 17, 21, 22};
    int tamanho = sizeof(A) / sizeof(A[0]);
    int alvo = 21;

    int indice = buscaBinariaIterativa(A, tamanho, alvo);
    if (indice != -1)
        cout << "O valor " << alvo << " foi encontrado no índice " << indice << endl;
    else
        cout << "O valor " << alvo << " não foi encontrado no vetor." << endl;

    return 0;
}
