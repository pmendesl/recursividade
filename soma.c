#include <stdio.h>
// Função recursiva para somar de n até 1
int soma(int n) {
    if (n == 0) return 0; // Caso base
    return n + soma(n - 1); // Passo recursivo
}
int main() {
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    if (numero < 0) {
        printf("Digite apenas numeros positivos.\n");
    } else {
        printf("Soma de 1 ate %d = %d\n", numero, soma(numero));
    }
    return 0;
}
