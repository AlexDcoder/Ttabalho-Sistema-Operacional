#include <stdio.h>
#include <Windows.h>

// Criação do conceito de Processo e seus Estados
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

// Criando n processos de vários tempos

void gerando_processos(Processo process[], int quantity){
    for (int i = 0; i < quantity; i++)
    {
       process[i].id = i;
       process[i].tempo_de_execucao = (50 + (50 * i));        
       process[i].estado = PRONTO;
    }
    
}

// Criação do algorimto round robin
void Round_Robin(int quantum, Processo lista_de_processos[], int quantidade_processos){
     for (int i = 0; i < quantidade_processos; i++)
     {
        printf("Processo %d em EXECUÇÃO\n", i + 1);
        lista_de_processos[i].estado = EXECUTANDO;
        lista_de_processos[i].tempo_de_execucao = lista_de_processos[i].tempo_de_execucao - quantum;
        Sleep(3);
        if (lista_de_processos[i].tempo_de_execucao <= 0)
        {
            printf("Processo %d em CONCLUIDO\n", i + 1);
            lista_de_processos[i].estado = FINALIZADO;
        } else {
            lista_de_processos[i].estado = PRONTO;
        }
        
     }
     
    
}


int main()
{
    Processo alguns_processos[5];
    gerando_processos(alguns_processos, 5);
    printf("INICIANDO ROUND ROBIN\n");
    Round_Robin(100, alguns_processos, sizeof(alguns_processos)/sizeof(alguns_processos[0]));
    return 0;
}