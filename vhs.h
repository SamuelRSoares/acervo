// vhs.h
#ifndef VHS_H
#define VHS_H

#include "midia.h"

class VHS : public Midia {
public:
    // Construtores
    VHS();
    VHS(string titulo, string data_publicacao, string autores,
        string data_emprestimo, string data_devolucao,
        string descricao, string local_publicacao,
        string produtora, int duracao_min);

    // Método para imprimir informações
    void imprimirInformacoes();
};

#endif

