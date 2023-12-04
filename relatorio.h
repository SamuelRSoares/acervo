#ifndef RELATORIO_H
#define RELATORIO_H

#include "item.h"

class Relatorio : public Item {
public:
    // Construtores
    Relatorio();
    Relatorio(string titulo, string data_publicacao, string autores,
              string data_emprestimo, string data_devolucao,
              string descricao, string local_publicacao);

    // Implementa��o do m�todo para imprimir informa��es
    void imprimirInformacoes();
};

#endif

