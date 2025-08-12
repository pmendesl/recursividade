#include <stdio.h>
// Função recursiva para calcular o n-ésimo termo da Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0; // Caso base 1
    if (n == 1) return 1; // Caso base 2
    return fibonacci(n - 1) + fibonacci(n - 2); // Passo recursivo
}
int main() {
    int termos;
    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &termos);
    if (termos <= 0) {
        printf("Digite um valor positivo.\n");
    } else {
        printf("Sequencia de Fibonacci (%d termos):\n", termos);
        for (int i = 0; i < termos; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }
    return 0;
}
