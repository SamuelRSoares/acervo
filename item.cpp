#include "item.h"
#include <iostream>

using namespace std;

// Implementa��o dos m�todos
Item::Item() {
    titulo = "";
    data_publicacao = "";
    autores = "";
    data_emprestimo = "";
    data_devolucao = "";
    descricao = "";
    local_publicacao = "";
}

Item::Item(string titulo, string data_publicacao, string autores,
           string data_emprestimo, string data_devolucao,
           string descricao, string local_publicacao) {
    this->titulo = titulo;
    this->data_publicacao = data_publicacao;
    this->autores = autores;
    this->data_emprestimo = data_emprestimo;
    this->data_devolucao = data_devolucao;
    this->descricao = descricao;
    this->local_publicacao = local_publicacao;
}

// M�todos getters e setters
string Item::getTitulo() const {
    return titulo;
}

string Item::getDataPublicacao() const {
    return data_publicacao;
}

string Item::getAutores() const {
    return autores;
}

string Item::getDataEmprestimo() const {
    return data_emprestimo;
}

string Item::getDataDevolucao() const {
    return data_devolucao;
}

string Item::getDescricao() const {
    return descricao;
}

string Item::getLocalPublicacao() const {
    return local_publicacao;
}

void Item::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Item::setDataPublicacao(string data_publicacao) {
    this->data_publicacao = data_publicacao;
}

void Item::setAutores(string autores) {
    this->autores = autores;
}

void Item::setDataEmprestimo(string data_emprestimo) {
    this->data_emprestimo = data_emprestimo;
}

void Item::setDataDevolucao(string data_devolucao) {
    this->data_devolucao = data_devolucao;
}

void Item::setDescricao(string descricao) {
    this->descricao = descricao;
}

void Item::setLocalPublicacao(string local_publicacao) {
    this->local_publicacao = local_publicacao;
}

// M�todo para imprimir informa��es
void Item::imprimirInformacoes() const {
    cout << "T�tulo: " << titulo << endl;
    cout << "Data de Publica��o: " << data_publicacao << endl;
    cout << "Autores: " << autores << endl;
    cout << "Data de Empr�stimo: " << data_emprestimo << endl;
    cout << "Data de Devolu��o: " << data_devolucao << endl;
    cout << "Descri��o: " << descricao << endl;
    cout << "Local de Publica��o: " << local_publicacao << endl;
}

