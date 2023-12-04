#ifndef LIVRO_H
#define LIVRO_H

#include "item.h"

class Livro : public Item {
private:
    string isbn;
    string editora;
    int num_paginas;
    int edicao;
    int volume;

public:
    // Construtores
    Livro();
    Livro(string isbn, string editora, int num_paginas, int edicao, int volume,
          string titulo, string data_publicacao, string autores,
          string data_emprestimo, string data_devolucao,
          string descricao, string local_publicacao);

    // Métodos getters e setters específicos de Livro
    string getIsbn() const;
    string getEditora() const;
    int getNumPaginas() const;
    int getEdicao() const;
    int getVolume() const;

    void setIsbn(string isbn);
    void setEditora(string editora);
    void setNumPaginas(int num_paginas);
    void setEdicao(int edicao);
    void setVolume(int volume);

    // Método para imprimir informações (sobrescrito)
    void imprimirInformacoes();
};

#endif

