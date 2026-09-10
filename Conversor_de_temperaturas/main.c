#include <stdio.h>

int main() {
    float temperatura;
    int opcao;

    printf("### Conversor de temperaturas ###\n");
    printf("1 - Celsius para Kelvin\n");
    printf("2 - Celsius para Fahrenheit\n");
    printf("3 - Kelvin para Celsius\n");
    printf("4 - Kelvin para Fahrenheit\n");
    printf("5 - Fahrenheit para Celsius\n");
    printf("6 - Fahrenheit para Kelvin\n");

    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (opcao) {

        case 1:
            temperatura = temperatura + 273.15;
            break;

        case 2:
            temperatura = temperatura * 9 / 5 + 32;
            break;

        case 3:
            temperatura = temperatura - 273.15;
            break;

        case 4:
            temperatura = (temperatura - 273.15) * 9 / 5 + 32;
            break;

        case 5:
            temperatura = (temperatura - 32) * 5 / 9;
            break;

        case 6:
            temperatura = (temperatura - 32) * 5 / 9 + 273.15;
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    printf("Temperatura convertida: %.2f\n", temperatura);

    return 0;
}
