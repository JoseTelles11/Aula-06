#include <stdio.h>

int main() {
    float valorCompra;
    float desconto = 0;
    float valorFinal;
    int pagamento;

    printf("===== SISTEMA DE CALCULO DE DESCONTO =====\n");

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("\nFormas de pagamento:\n");
    printf("1 - PIX (20%% de desconto)\n");
    printf("2 - Debito (15%% de desconto)\n");
    printf("3 - Credito (5%% de desconto)\n");

    printf("Escolha a forma de pagamento: ");
    scanf("%d", &pagamento);

    switch (pagamento) {
        case 1:
            desconto = valorCompra * 0.20;
            printf("\nForma de pagamento: PIX\n");
            break;

        case 2:
            desconto = valorCompra * 0.15;
            printf("\nForma de pagamento: Debito\n");
            break;

        case 3:
            desconto = valorCompra * 0.05;
            printf("\nForma de pagamento: Credito\n");
            break;

        default:
            printf("Forma de pagamento invalida!");
            return 0;
    }

    valorFinal = valorCompra - desconto;

    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor a pagar: R$ %.2f\n", valorFinal);

    return 0;
}