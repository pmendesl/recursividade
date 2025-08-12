#include <stdio.h>
// Função recursiva para calcular potencia
int potencia(int base, int expoente) {
    if (expoente == 0) return 1; // Caso base
    return base * potencia(base, expoente - 1); // Passo recursivo
}
int main() {
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente (positivo): ");
    scanf("%d", &expoente);
    if (expoente < 0) {
        printf("Expoente negativo nao suportado nesta versao.\n");
    } else {
        printf("%d elevado a %d = %d\n", base, expoente, potencia(base, expoente));
    }
    return 0;
}
