#include <stdio.h>

int main() {
    int codigo;

    printf("=====================================\n");
    printf("      Sistema de Pedidos Restaurante\n");
    printf("=====================================\n");

    printf("\nCardapio Digital:\n");
    printf("1 - Hamburguer Artesanal - R$ 25.00\n");
    printf("2 - Pizza Calabresa      - R$ 45.00\n");
    printf("3 - Prato Executivo      - R$ 35.00\n");
    printf("4 - Refrigerante         - R$ 8.00\n");
    printf("5 - Sobremesa            - R$ 12.00\n");
    printf("6 - Encerrar Pedido\n");

    printf("\nDigite o codigo do produto desejado: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("\nProduto escolhido: Hamburguer Artesanal\n");
            printf("Valor: R$ 25.00\n");
            printf("Pedido confirmado! Aguarde o preparo.");
            break;

        case 2:
            printf("\nProduto escolhido: Pizza Calabresa\n");
            printf("Valor: R$ 45.00\n");
            printf("Pedido confirmado! Aguarde o preparo.");
            break;

        case 3:
            printf("\nProduto escolhido: Prato Executivo\n");
            printf("Valor: R$ 35.00\n");
            printf("Pedido confirmado! Aguarde o preparo.");
            break;

        case 4:
            printf("\nProduto escolhido: Refrigerante\n");
            printf("Valor: R$ 8.00\n");
            printf("Pedido confirmado!");
            break;

        case 5:
            printf("\nProduto escolhido: Sobremesa\n");
            printf("Valor: R$ 12.00\n");
            printf("Pedido confirmado! Aguarde o preparo.");
            break;

        case 6:
            printf("\nPedido encerrado. Obrigado!");
            break;

        default:
            printf("\nOpcao invalida. Produto nao encontrado no cardapio.");
    }

    return 0;
}