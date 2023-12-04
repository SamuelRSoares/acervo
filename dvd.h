#ifndef DVD_H
#define DVD_H

#include "midia.h"

class DVD : public Midia {
public:
    // Construtores
    DVD();
    DVD(string titulo, string data_publicacao, string autores,
        string data_emprestimo, string data_devolucao,
        string descricao, string local_publicacao,
        string produtora, int duracao_min);

    // Método para imprimir informações
    void imprimirInformacoes();
};

#endif

