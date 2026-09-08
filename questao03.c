#include <stdio.h>

int main() {
    int codigo;

    printf("1 - Frios e Laticinios\n");
    printf("2 - Carnes e Peixes\n");
    printf("3 - Hortifruti\n");
    printf("4 - Padaria\n");
    printf("5 - Bebidas\n");

    printf("Digite o codigo: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Frios e Laticinios");
            break;

        case 2:
            printf("Carnes e Peixes");
            break;

        case 3:
            printf("Hortifruti");
            break;

        case 4:
            printf("Padaria");
            break;

        case 5:
            printf("Bebidas");
            break;

        default:
            printf("Categoria invalida");
    }

    return 0;
}