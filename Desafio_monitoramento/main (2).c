#include <stdio.h>

int main()
{
    float temperatura;
    float temperatura1;
    float temperatura2;
    float temperatura3;

    float soma = 0;
    float media;
    float maior;
    float menor;

    int contador = 0;

    while (contador < 3) {

        printf("Digite uma temperatura (em Celsius): ");
        scanf("%f", &temperatura);

        if (temperatura >= -25 && temperatura <= 100) {

            if (contador == 0) {
                temperatura1 = temperatura;
                maior = temperatura;
                menor = temperatura;
            }

            if (contador == 1) {
                temperatura2 = temperatura;

                if (temperatura > maior)
                    maior = temperatura;

                if (temperatura < menor)
                    menor = temperatura;
            }

            if (contador == 2) {
                temperatura3 = temperatura;

                if (temperatura > maior)
                    maior = temperatura;

                if (temperatura < menor)
                    menor = temperatura;
            }

            soma = soma + temperatura;

            contador++;

        } else {

            printf("Temperatura invalida!\n");
            return 0;
        }
    }

    media = soma / 3;

    printf("\n--- RESULTADO ---\n");
    printf("Temperatura 1: %.2f\n", temperatura1);
    printf("Temperatura 2: %.2f\n", temperatura2);
    printf("Temperatura 3: %.2f\n", temperatura3);
    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Menor temperatura: %.2f\n", menor);

    return 0;
}