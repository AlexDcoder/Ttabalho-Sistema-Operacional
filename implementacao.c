#include <stdio.h>

// Criação do conceito de Processo 
typedef enum {
    PRONTO,
    EXECUTANDO,
    BLOQUEADO,
    FINALIZADO,
} EstadoProcesso;

typedef struct {
    int id;
    int tempo_de_execucao;
    EstadoProcesso estado;
} Processo;

// Criando n projetos de vários tipos

void gerando_processos(Processo process[], int quantity){
    for (int i = 0; i < quantity; i++)
    {
       process[i].id = i;
       process[i].tempo_de_execucao = (50 + (50 * i));        
       process[i].estado = PRONTO;
    }
    
}

// Criação do algorimto round robin
void Round_Robin(int quantum, Processo some_process[], int quantidade_processos, int processo_atual){
    if (some_process[atual].estado == PRONTO)
    {
        some_process[atual].estado = EXECUTANDO
        printf("Processo %d está em EXECUÇÃO\n")
        return Round_Robin(quantum, some_process, quantidade_processos, processo_atual);
    }

    if (some_process[atual].estado == EXECUTANDO)
    {
        some_process[atual].tempo_de_execucao -= quantum;

        if some_process[atual].tempo_de_execucao <= 0{
            printf("Processo %d foi FINALIZADO\n")
            return Round_Robin(quantum, some_process, quantidade_processos, processo_atual);
        }
    }
    
    if (some_process[atual].estado == FINALIZADO)
    {
        
    }
    
    
}


int main()
{
    Processo alguns_processos[5];
    gerando_processos(alguns_processos, 5);
    printf("INICIANDO ROUND ROBIN\n");
    Round_Robin(100, alguns_processos, sizeof(alguns_processos)/sizeof(alguns_processos[0]), 0);
    return 0;
}