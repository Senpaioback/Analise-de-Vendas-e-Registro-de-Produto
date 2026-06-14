#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // Necessária para o system("cls") funcionar
#include <locale.h>
#include "login.h"

// Definindo o usuário e a senha corretos
#define USUARIO_CORRETO "admin"
#define SENHA_CORRETA "7070"

int realizarLogin() {
    // Configura o terminal para aceitar acentos em português
    setlocale(LC_ALL, "Portuguese");

    char usuario[TAM_MAX];
    char senha[TAM_MAX];
 
    system("cls"); // Limpa a tela a cada nova tentativa
    printf("===== SEJA BEM-VINDO AO SISTEMA DE VENDAS =====\n\n");

    printf("Digite o usuário: ");
    scanf("%19s", usuario);
    
    printf("Digite a senha: ");
    scanf("%19s", senha);

    // Compara o que foi digitado com as nossas constantes do topo
    if (strcmp(usuario, USUARIO_CORRETO) == 0 && strcmp(senha, SENHA_CORRETA) == 0) {
        printf("\nAcesso confirmado!\n");
        return 1; // Retorna 1 para indicar SUCESSO
    } else {
        printf("\nUsuário ou senha incorretos!\n");
        return 0; // Retorna 0 para indicar FALHA
    }
}