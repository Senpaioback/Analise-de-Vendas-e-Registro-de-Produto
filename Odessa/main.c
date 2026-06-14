#include <stdio.h>
#include "login.h"

int main() {
    int logado = 0;
    int tentativas = 0;
    
    // O laço roda enquanto não estiver logado E não estourar as 3 tentativas
    while (logado == 0 && tentativas < 3) {
        logado = realizarLogin(); // Chama a função do login.c
        
        if (logado == 0) {
            tentativas++; // Soma 1 erro no contador
            printf("Tentativas restantes: %d\n", 3 - tentativas);
            
            // Pausa a tela para você conseguir ler a mensagem de erro
            printf("Pressione Enter para continuar...");
            fflush(stdin); // Limpa o buffer do teclado (no Windows)
            getchar();     // Espera o Enter
        }
    }
    
    // Teste final após sair do laço
    if (logado == 1) {
        printf("\n--- BEM-VINDO AO MENU PRINCIPAL ---\n");
        printf("Acesso liberado com sucesso.\n");
        
        // [Aqui vai entrar a Tabela Hash de Produtos na próxima fase!]
        
    } else {
        printf("\n[BLOQUEADO] Número de tentativas excedido. Programa encerrado.\n");
    }
    
    return 0;
}