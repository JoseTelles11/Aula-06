#include <stdio.h>

int main() {
    char nota;

    printf("Digite a nota conceitual: ");
    scanf(" %c", &nota);

    switch (nota) {
        case 'A':
        case 'a':
            printf("Excelente");
            break;

        case 'B':
        case 'b':
            printf("Bom");
            break;

        case 'C':
        case 'c':
            printf("Razoavel");
            break;

        case 'D':
        case 'd':
            printf("Ruim");
            break;

        case 'F':
        case 'f':
            printf("Reprovado");
            break;

        default:
            printf("Nota invalida");
    }

    return 0;
}