#ifndef REVISTA_H
#define REVISTA_H

#include "periodico.h"

class Revista : public Periodico {
public:
    // Construtores
    Revista();
    Revista(string titulo, string data_publicacao, string autores,
            string data_emprestimo, string data_devolucao,
            string descricao, string local_publicacao,
            string issn, string area_tematica);

    // Implementação do método para imprimir informações
    void imprimirInformacoes();
};

#endif

