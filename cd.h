#ifndef CD_H
#define CD_H

#include "midia.h"

class CD : public Midia {
public:
    // Construtores
    CD();
    CD(string titulo, string data_publicacao, string autores,
       string data_emprestimo, string data_devolucao,
       string descricao, string local_publicacao,
       string produtora, int duracao_min);

    // Método para imprimir informações
    void imprimirInformacoes();
};

#endif

