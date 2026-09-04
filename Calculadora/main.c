#include <stdio.h>
#include <math.h>

int main() {

    int opcao;
    double a, b, resultado;

    printf("=== CALCULADORA ===\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Potenciacao\n");
    printf("6 - Raiz quadrada\n");
    printf("7 - Raiz cubica\n");
    printf("8 - Seno\n");
    printf("9 - Cosseno\n");
    printf("10 - Tangente\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &a, &b);
            resultado = a + b;
            printf("Resultado: %.2lf", resultado);
            break;

        case 2:
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &a, &b);
            resultado = a - b;
            printf("Resultado: %.2lf", resultado);
            break;

        case 3:
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &a, &b);
            resultado = a * b;
            printf("Resultado: %.2lf", resultado);
            break;

        case 4:
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &a, &b);

            if (b == 0) {
                printf("Nao pode dividir por zero!");
            } else {
                resultado = a / b;
                printf("Resultado: %.2lf", resultado);
            }
            break;

        case 5:
            printf("Digite a base e o expoente: ");
            scanf("%lf %lf", &a, &b);
            resultado = pow(a, b);
            printf("Resultado: %.2lf", resultado);
            break;

        case 6:
            printf("Digite um numero: ");
            scanf("%lf", &a);
            resultado = sqrt(a);
            printf("Resultado: %.2lf", resultado);
            break;

        case 7:
            printf("Digite um numero: ");
            scanf("%lf", &a);
            resultado = cbrt(a);
            printf("Resultado: %.2lf", resultado);
            break;

        case 8:
            printf("Digite o angulo em radianos: ");
            scanf("%lf", &a);
            resultado = sin(a);
            printf("Resultado: %.2lf", resultado);
            break;

        case 9:
            printf("Digite o angulo em radianos: ");
            scanf("%lf", &a);
            resultado = cos(a);
            printf("Resultado: %.2lf", resultado);
            break;

        case 10:
            printf("Digite o angulo em radianos: ");
            scanf("%lf", &a);
            resultado = tan(a);
            printf("Resultado: %.2lf", resultado);
            break;

        default:
            printf("Opcao invalida!");
    }

    return 0;
}


