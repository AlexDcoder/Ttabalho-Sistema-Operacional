# Trabalhos de Sistemas Operacionais


## Membros
[Alexandre Franco](https://github.com/AlexDcoder)
[Alexandre Braga](https://github.com/xandili)

## Contextualização do Primeiro Traballho
O trabalho de implementação consistirá de uma implementação do algoritmo de escalonamento ROUND-ROBIN. Vocês podem utilizar como base, a implementação do algoritmo "primeiro a chegar, primeiro a ser servido" como uma base. Lembrando que este último foi implementado em casa e consta na seção de códigos.

## Contextualização do Segundo Traballho
O trabalho consistirá da pesquisa de 2 das 5 técnicas de exclusão mútua apresentadas no slide 5 & 6. 
As técnicas são:

*Desabilitação de  interrupções

*Variáveis lock(trava)

*Alternância Explícitas

*Solução de Peterson

*Desabilitação de  interrupçõesInstrução TSL

## Técnicas Escolhidas

### Variáveis de trava(lock)
*Uma única variável lock indica quando há
algum processo em uma região crítica*  
*Se lock == 0 não há processo na região
crítica.*   
Se lock == 1 há processo na região crítica. 

A ideia é:  
*Se o seu processo quer entrar na
região crítica ele deve ler lock e só poderá
entrar quando lock == 0, quando ele entrar deve fazer lock = 1*

### Desabilitar interrupções
*- Ao entrar na região crítica ficam desabilitadas
as interrupções*

*- Evita que ocorra troca de contexto por tempo.

*- Em um sistema multiprocessado pode ser
complexo ou impossível desabilitar a
interrupção em todos os processadores*

*- Entregar o controle das interrupções ao usuário
pode ser perigoso se o processo não habilitar
novamente estas interrupções.*


# Referências:
* [Aula07.pdf
](https://docente.ifrn.edu.br/tadeuferreira/disciplinas/2016.1/sistemas-operacionais/Aula07.pdf).
