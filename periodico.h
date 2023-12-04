// periodico.h
#ifndef PERIODICO_H
#define PERIODICO_H

#include "item.h"
#include <string>

using namespace std;

class Periodico : public Item {
private:
    string issn;
    string area_tematica;

public:
    // Construtores
    Periodico();
    Periodico(string titulo, string data_publicacao, string autores,
              string data_emprestimo, string data_devolucao,
              string descricao, string local_publicacao,
              string issn, string area_tematica);

    // Métodos getters e setters
    string getISSN();
    string getAreaTematica();
    void setISSN(string issn);
    void setAreaTematica(string area_tematica);

    // Método puro virtual para imprimir informações
    virtual void imprimirInformacoes() = 0;
};

#endif

