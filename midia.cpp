#include "midia.h"
#include <iostream>

using namespace std;

// Implementa��o dos m�todos
Midia::Midia() : Item() {
    produtora = "";
    duracao_min = 0;
}

Midia::Midia(string titulo, string data_publicacao, string autores,
             string data_emprestimo, string data_devolucao,
             string descricao, string local_publicacao,
             string produtora, int duracao_min)
    : Item(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
           descricao, local_publicacao), produtora(produtora), duracao_min(duracao_min) {
}

// M�todos getters e setters
string Midia::getProdutora() {
    return produtora;
}

int Midia::getDuracaoMin() {
    return duracao_min;
}

void Midia::setProdutora(string produtora) {
    this->produtora = produtora;
}

void Midia::setDuracaoMin(int duracao_min) {
    this->duracao_min = duracao_min;
}

// M�todo para imprimir informa��es
void Midia::imprimirInformacoes() {
    Item::imprimirInformacoes(); // Chama a implementa��o da classe base

    cout << "Produtora: " << produtora << endl;
    cout << "Dura��o (min): " << duracao_min << endl;
}

