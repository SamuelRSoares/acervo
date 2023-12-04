// cartaz.cpp
#include "cartaz.h"
#include <iostream>

using namespace std;

// Implementa��o dos m�todos
Cartaz::Cartaz() : Item() {
    area_tematica = "";
}

Cartaz::Cartaz(string titulo, string data_publicacao, string autores,
               string data_emprestimo, string data_devolucao,
               string descricao, string local_publicacao, string area_tematica)
    : Item(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
           descricao, local_publicacao) {
    this->area_tematica = area_tematica;
}

// M�todos getters e setters
string Cartaz::getAreaTematica() {
    return area_tematica;
}

void Cartaz::setAreaTematica(string area_tematica) {
    this->area_tematica = area_tematica;
}

// M�todo para imprimir informa��es
void Cartaz::imprimirInformacoes() {
	cout << "Informa��es do Cartaz: " << endl;
    Item::imprimirInformacoes(); // Chama a implementa��o da classe base
    cout << "�rea Tem�tica: " << area_tematica << endl;
}

