// cartaz.h
#ifndef CARTAZ_H
#define CARTAZ_H

#include "item.h"
#include <string>

using namespace std;

class Cartaz : public Item {
private:
    string area_tematica;

public:
    // Construtores
    Cartaz();
    Cartaz(string titulo, string data_publicacao, string autores,
           string data_emprestimo, string data_devolucao,
           string descricao, string local_publicacao, string area_tematica);

    // M�todos getters e setters
    string getAreaTematica();
    void setAreaTematica(string area_tematica);

    // M�todo para imprimir informa��es
    void imprimirInformacoes();
};

#endif


