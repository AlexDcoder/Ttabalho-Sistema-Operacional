#include <stdio.h>

// Criação do conceito de Processo 
typedef enum {
    PRONTO,
    EXECUTANDO,
    BLOQUEADO,
} EstadoProcesso;

typedef struct {
    int id;
    int tempo_de_execucao;
    EstadoProcesso estado;
} Processo;

// Criando n projetos de vários tipos

// Criação do algorimto round robin


int main()
{
    Processo p;
    
    return 0;
}