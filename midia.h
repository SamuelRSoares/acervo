// midia.h
#ifndef MIDIA_H
#define MIDIA_H

#include "item.h"

class Midia : public Item {
private:
    string produtora;
    int duracao_min;

public:
    // Construtores
    Midia();
    Midia(string titulo, string data_publicacao, string autores,
          string data_emprestimo, string data_devolucao,
          string descricao, string local_publicacao,
          string produtora, int duracao_min);

    // Métodos getters e setters
    string getProdutora();
    int getDuracaoMin();
    void setProdutora(string produtora);
    void setDuracaoMin(int duracao_min);

    // Método puro virtual para tornar a classe abstrata
    virtual void imprimirInformacoes() = 0;
};

#endif

