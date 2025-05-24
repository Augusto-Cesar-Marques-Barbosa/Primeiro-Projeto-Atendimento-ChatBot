#include <stdio.h>
#include <stdio_ext.h>
#include <unistd.h>

int main() {
    int menu, produto, saldo, preço;

// DIGITE O SALDO//
    printf("Olá, Antes de começarmos poderia nos informar seu Saldo? (R$): ");
    printf("\nDigite seu Saldo: ");
    do { 
        scanf("%d", &saldo);
        if (saldo > 0) {
            printf("Saldo Valido, continue.");
        }
        else {
        printf("Saldo inválido. Tente novamente: ");
        }
    }
    while (saldo <= 0);


// MENU DA LOJA //
    do {
        printf("\n\n=== LOJA SPORTLIVRE ===");
        printf("\nSaldo: R$ %d\n", saldo);
        printf("1 - Ver produtos\n");
        printf("2 - Falar com humano\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &menu);

// CAMINHO DE CADA ESCOLHA // 

    switch(menu) {
        case 1: // VER PRODUTOS //
            printf("\n\n=== PRODUTOS DA SPORTLIVRE ===\n");
            printf("1 - Bola de Futebol - R$ 30,00\n");
            printf("2 - Camisa de Time - R$ 60,00\n");
            printf("3 - Chuteira Foda - R$ 90,00\n");
            printf("4 - Encerrar Compras");
            while (1) {
            printf("\n\nSaldo Restante: R$ %d", saldo);
            printf("\nEscolha o que deseja comprar: ");
            scanf("%d", &produto);
                if (produto == 1) {
                    if (saldo - 30 < 0) {
                    printf("\nVocê não possui saldo suficiente\n");
                    }
                    else {
                    saldo = saldo - 30;
                    printf("\nVocê comprou a Bola de Futebol por R$ 30");
                    }
                }
                if (produto == 2) {
                    if (saldo - 60 < 0) {
                    printf("\nVocê não possui saldo suficiente\n");
                    }
                    else {
                    saldo = saldo - 60;
                    printf("\nVocê comprou a Camisa de Time por R$ 60");
                    }
                }
                if (produto == 3) {
                    if (saldo - 90 < 0) {
                    printf("\nVocê não possui saldo suficiente\n");
                    }
                    else {
                    saldo = saldo - 90;
                    printf("\nVocê comprou a Chuteira Foda por R$ 90");
                    }
                }
                if (produto == 4) {
                    if (saldo < 0) {
                    printf("\nVocê não possui saldo suficiente\n");
                    break;
                    }
                    else {
                    printf("\nAgradecemos as Compras\n");
                    printf("ADICIONAR AQUI OS ITENS COMPRADO PELO CLIENTE DEPOIS");
                    break;
                    }
                }
            }
        break;
        case 2: // FALAR COM HUMANO //
            printf("\nUm atendente estará com você em breve...\n");
            sleep(2);
            break;

        case 3: // SAIR //
            printf("\nNós da SportLivre agradecemos muito a sua compra, não se esqueça de postar uma foto nas redes sociais e nós marcar para gente curtir esse momento com você!");
            printf("\n\n- Atenciosamente, Equipe SportLivre");
            break;

        default: // MENSAGEM DE ERRO //
            printf("\nUm problema inesperado ocorreu. Aguarde alguns minutos e tente novamente. Caso o problema persista, contate os administradores do sistema.");
            break;
            }
        } 
    while (menu != 3);
    return 0;
}


