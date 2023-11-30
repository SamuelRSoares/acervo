#include "item.h"
#include <iostream>

using namespace std;

// Implementação dos métodos
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

// Métodos getters e setters
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

// Método para imprimir informações
void Item::imprimirInformacoes() const {
    cout << "Título: " << titulo << endl;
    cout << "Data de Publicação: " << data_publicacao << endl;
    cout << "Autores: " << autores << endl;
    cout << "Data de Empréstimo: " << data_emprestimo << endl;
    cout << "Data de Devolução: " << data_devolucao << endl;
    cout << "Descrição: " << descricao << endl;
    cout << "Local de Publicação: " << local_publicacao << endl;
}

