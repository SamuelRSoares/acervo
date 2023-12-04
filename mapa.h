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

    // Métodos getters e setters
    string getEscala();
    void setEscala(string escala);

    // Implementação do método para imprimir informações
    void imprimirInformacoes();
};

#endif

