#include <stdio.h>
#include <stdio_ext.h>
#include <unistd.h>

int main() {
    int menu, produto;
    float saldo, preço;

// DIGITE O SALDO //
    printf("Olá, Antes de começarmos poderia nos informar seu Saldo? (R$): ");
    printf("\nDigite seu Saldo: ");
    do { 
        scanf("%f", &saldo);
        if (saldo > 0) {
            printf("Saldo válido, continue.");
        }
        else {
            printf("Saldo inválido. Tente novamente: ");
        }
    }
    while (saldo <= 0);

// MENU DA LOJA //
    do {
        printf("\n\n=== LOJA SPORTLIVRE ===");
        printf("\nSaldo: R$ %.2f\n", saldo);
        printf("1 - Ver produtos\n");
        printf("2 - Falar com humano\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &menu);

// CAMINHO DE CADA ESCOLHA // 
        switch(menu) {
            case 1: // VER PRODUTOS //
                printf("\n\n===== PRODUTOS DA SPORTLIVRE =====\n");
                printf("1 - Cone de Marcação \t R$ 20,00\n");
                printf("2 - Bola de Futebol \t R$ 30,00\n");
                printf("3 - Bola de Basquete \t R$ 50,00\n");
                printf("4 - Capacetes \t\t R$ 100,00\n");
                printf("5 - Camiseta de Time \t R$ 130,00\n");
                printf("6 - Tênis de Corrida \t R$ 150,00\n");
		        printf("7 - Encerrar as Compras\n");
                printf("==================================");
                while (1) {
                    printf("\n\nSaldo Restante: R$ %.2f", saldo);
                    printf("\nEscolha o que deseja comprar: ");
                    scanf("%d", &produto);
                    
                    if (produto == 1) {
                        preço = 20.00;
                            if (saldo - preço < 0) {
                            printf("Você não possui saldo suficiente\n");
                        }
                        else {
                            saldo = saldo - preço;
                            printf("Você comprou por R$ %.2f", preço);
                        }
                    }
                    if (produto == 2) {
                        preço = 30.00;
                            if (saldo - preço < 0) {
                            printf("Você não possui saldo suficiente\n");
                        }
                        else {
                            saldo = saldo - preço;
                            printf("Você comprou por R$ %.2f", preço);
                        }
                    }
                    if (produto == 3) {
                        preço = 50.00;
                            if (saldo - preço < 0) {
                            printf("Você não possui saldo suficiente\n");
                        }
                        else {
                            saldo = saldo - preço;
                            printf("Você comprou por R$ %.2f", preço);
                        }
                    }
                    if (produto == 4) {
                        preço = 100.00;
                            if (saldo - preço < 0) {
                            printf("Você não possui saldo suficiente\n");
                        }
                        else {
                            saldo = saldo - preço;
                            printf("Você comprou por R$ %.2f", preço);
                        }
                    }
                    if (produto == 5) {
                        preço = 130.00;
                            if (saldo - preço < 0) {
                            printf("Você não possui saldo suficiente\n");
                        }
                        else {
                            saldo = saldo - preço;
                            printf("Você comprou por R$ %.2f", preço);
                        }
                    }
                    if (produto == 6) {
                        preço = 150.00;
                            if (saldo - preço < 0) {
                            printf("Você não possui saldo suficiente\n");
                        }
                        else {
                            saldo = saldo - preço;
                            printf("Você comprou por R$ %.2f", preço);
                        }
                    }
    
                        if (produto == 1) {
                        preço = 20.00;
                            if (saldo - preço <= 0) {
                            printf("Você não possui saldo suficiente\n");
                        }
                        else {
                            saldo = saldo - preço;
                            printf("Você comprou por R$ %.2f", preço);
                        }
                    }
                    if (produto == 7) {
                            if (saldo < 0) {
                            printf("Você não possui saldo suficiente\n");
                            break;
                        }
                        else {
                        printf("\nAgradecemos as Compras\n");
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
                printf("\nNós da SportLivre agradecemos muito a sua compra, não se esqueça de postar uma foto nas redes sociais e nos marcar para gente curtir esse momento com você!");
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
