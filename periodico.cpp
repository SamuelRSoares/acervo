// periodico.cpp
#include "periodico.h"
#include <iostream>

using namespace std;

// Implementa��o dos m�todos
Periodico::Periodico() : Item() {
    issn = "";
    area_tematica = "";
}

Periodico::Periodico(string titulo, string data_publicacao, string autores,
                     string data_emprestimo, string data_devolucao,
                     string descricao, string local_publicacao,
                     string issn, string area_tematica)
    : Item(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
           descricao, local_publicacao) {
    this->issn = issn;
    this->area_tematica = area_tematica;
}

// M�todos getters e setters
string Periodico::getISSN() {
    return issn;
}

string Periodico::getAreaTematica() {
    return area_tematica;
}

void Periodico::setISSN(string issn) {
    this->issn = issn;
}

void Periodico::setAreaTematica(string area_tematica) {
    this->area_tematica = area_tematica;
}

// M�todo para imprimir informa��es
void Periodico::imprimirInformacoes() {
    Item::imprimirInformacoes(); // Chama a implementa��o da classe base
    cout << "ISSN: " << issn << endl;
    cout << "�rea Tem�tica: " << area_tematica << endl;
}
