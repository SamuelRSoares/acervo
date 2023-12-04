#include "mapa.h"
#include <iostream>

using namespace std;

// Implementa��o dos m�todos
Mapa::Mapa() : Item() {
    escala = "";
}

Mapa::Mapa(string titulo, string data_publicacao, string autores,
           string data_emprestimo, string data_devolucao,
           string descricao, string local_publicacao, string escala)
    : Item(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
           descricao, local_publicacao), escala(escala) {
}

// M�todos getters e setters
string Mapa::getEscala() {
    return escala;
}

void Mapa::setEscala(string escala) {
    this->escala = escala;
}

// Implementa��o do m�todo para imprimir informa��es
void Mapa::imprimirInformacoes() {
	cout << "Informa��es do Mapa: " << endl;
    Item::imprimirInformacoes(); // Chama a implementa��o da classe base
    cout << "Escala: " << escala << endl;
}

