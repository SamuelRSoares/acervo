#include "mapa.h"
#include <iostream>

using namespace std;

// Implementação dos métodos
Mapa::Mapa() : Item() {
    escala = "";
}

Mapa::Mapa(string titulo, string data_publicacao, string autores,
           string data_emprestimo, string data_devolucao,
           string descricao, string local_publicacao, string escala)
    : Item(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
           descricao, local_publicacao), escala(escala) {
}

// Métodos getters e setters
string Mapa::getEscala() {
    return escala;
}

void Mapa::setEscala(string escala) {
    this->escala = escala;
}

// Implementação do método para imprimir informações
void Mapa::imprimirInformacoes() {
	cout << "Informações do Mapa: " << endl;
    Item::imprimirInformacoes(); // Chama a implementação da classe base
    cout << "Escala: " << escala << endl;
}

