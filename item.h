#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

using namespace std;

class Item {
private:
    string titulo;
    string data_publicacao;
    string autores; // Alterado para string única
    string data_emprestimo;
    string data_devolucao;
    string descricao;
    string local_publicacao;

public:
    // Construtores
    Item();
    Item(string titulo, string data_publicacao, string autores,
         string data_emprestimo, string data_devolucao,
         string descricao, string local_publicacao);

    // Métodos getters e setters
    string getTitulo() const;
    string getDataPublicacao() const;
    string getAutores() const;
    string getDataEmprestimo() const;
    string getDataDevolucao() const;
    string getDescricao() const;
    string getLocalPublicacao() const;

    void setTitulo(string titulo);
    void setDataPublicacao(string data_publicacao);
    void setAutores(string autores);
    void setDataEmprestimo(string data_emprestimo);
    void setDataDevolucao(string data_devolucao);
    void setDescricao(string descricao);
    void setLocalPublicacao(string local_publicacao);

    // Método para imprimir informações
    void imprimirInformacoes() const;
};

#endif

