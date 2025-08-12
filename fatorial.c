#include <stdio.h>
// Função recursiva para calcular o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base
    }
    return n * fatorial(n - 1); // Passo recursivo
}
int main() {
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    if (numero < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        printf("Fatorial de %d = %d\n", numero, fatorial(numero));
    }
    return 0;
}
