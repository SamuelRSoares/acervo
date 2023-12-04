// cartaz.cpp
#include "cartaz.h"
#include <iostream>

using namespace std;

// Implementação dos métodos
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

// Métodos getters e setters
string Cartaz::getAreaTematica() {
    return area_tematica;
}

void Cartaz::setAreaTematica(string area_tematica) {
    this->area_tematica = area_tematica;
}

// Método para imprimir informações
void Cartaz::imprimirInformacoes() {
	cout << "Informações do Cartaz: " << endl;
    Item::imprimirInformacoes(); // Chama a implementação da classe base
    cout << "Área Temática: " << area_tematica << endl;
}

