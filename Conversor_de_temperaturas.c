#include <stdio.h>

int main() {
    float temperatura;
    char origem, destino;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    printf("Escolha a origem (C, F ou K): ");
    scanf(" %c", &origem);

    printf("Escolha o destino (C, F ou K): ");
    scanf(" %c", &destino);

    if (origem == 'C' && destino == 'F')
        temperatura = temperatura * 9 / 5 + 32;

    else if (origem == 'C' && destino == 'K')
        temperatura = temperatura + 273;

    else if (origem == 'K' && destino == 'C')
        temperatura = temperatura - 273;

    else if (origem == 'K' && destino == 'F')
        temperatura = (temperatura - 273) * 9 / 5 + 32;

    else if (origem == 'F' && destino == 'C')
        temperatura = (temperatura - 32) * 5 / 9;

    else if (origem == 'F' && destino == 'K')
        temperatura = (temperatura - 32) * 5 / 9 + 273;

    printf("Resultado: %.2f %c\n", temperatura, destino);

    return 0;
}
