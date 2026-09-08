#include <stdio.h>

int main() {
    int opcao;

    printf("=====================================\n");
    printf("   Sistema Inteligente de Atendimento\n");
    printf("=====================================\n");

    printf("1 - Suporte Tecnico\n");
    printf("2 - Financeiro\n");
    printf("3 - Recursos Humanos\n");
    printf("4 - Comercial\n");
    printf("5 - Encerrar Atendimento\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nSetor selecionado: Suporte Tecnico\n");
            printf("Atendimento para sistemas, computadores, redes e equipamentos.");
            break;

        case 2:
            printf("\nSetor selecionado: Financeiro\n");
            printf("Atendimento para pagamentos, cobrancas, contratos e faturamento.");
            break;

        case 3:
            printf("\nSetor selecionado: Recursos Humanos\n");
            printf("Atendimento para colaboradores, beneficios e documentos internos.");
            break;

        case 4:
            printf("\nSetor selecionado: Comercial\n");
            printf("Atendimento para propostas, vendas, clientes e negociacoes comerciais.");
            break;

        case 5:
            printf("\nAtendimento encerrado. Obrigado pelo contato!");
            break;

        default:
            printf("\nOpcao invalida. Escolha um setor disponivel.");
    }

    return 0;
}