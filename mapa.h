// mapa.h
#ifndef MAPA_H
#define MAPA_H

#include "item.h"

class Mapa : public Item {
private:
    string escala;

public:
    // Construtores
    Mapa();
    Mapa(string titulo, string data_publicacao, string autores,
         string data_emprestimo, string data_devolucao,
         string descricao, string local_publicacao, string escala);

    // M�todos getters e setters
    string getEscala();
    void setEscala(string escala);

    // Implementa��o do m�todo para imprimir informa��es
    void imprimirInformacoes();
};

#endif

