#include <stdio.h>
#include <string.h>

// Definição da estrutura Paciente
struct Paciente {
    char nome[50];
    int idade;
    char profissao[50];
    char prioridade[20]; // "alta" ou "desconhecida"
};

// Função para alterar a prioridade do paciente
void alterarPrioridade(struct Paciente *paciente) {
    // Verifica se o paciente tem mais de 60 anos ou trabalha em uma profissão de alto risco
    if (paciente->idade > 60 ||
        strcmp(paciente->profissao, "enfermeiro") == 0 ||
        strcmp(paciente->profissao, "médico") == 0 ||
        strcmp(paciente->profissao, "motorista") == 0 ||
        strcmp(paciente->profissao, "motoboy") == 0 ||
        strcmp(paciente->profissao, "atendente") == 0) {
            strcpy(paciente->prioridade, "alta");
    } else {
        strcpy(paciente->prioridade, "desconhecida");
    }
}

int main() {
    // Exemplo de utilização da função
    struct Paciente paciente1 = {"João", 55, "professor", ""};
    struct Paciente paciente2 = {"Maria", 65, "enfermeiro", ""};

    // Altera a prioridade do paciente
    alterarPrioridade(&paciente1);
    alterarPrioridade(&paciente2);

    // Exibe os resultados
    printf("Prioridade do paciente %s: %s\n", paciente1.nome, paciente1.prioridade);
    printf("Prioridade do paciente %s: %s\n", paciente2.nome, paciente2.prioridade);

    return 0;
}