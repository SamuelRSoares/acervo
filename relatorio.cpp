// relatorio.cpp
#include "relatorio.h"
#include <iostream>

using namespace std;

// Implementa��o dos m�todos
Relatorio::Relatorio() : Item() {
}

Relatorio::Relatorio(string titulo, string data_publicacao, string autores,
                     string data_emprestimo, string data_devolucao,
                     string descricao, string local_publicacao)
    : Item(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
           descricao, local_publicacao) {
}

// Implementa��o do m�todo para imprimir informa��es
void Relatorio::imprimirInformacoes() {
	cout << "Informa��es do Relat�rio: " << endl;
    Item::imprimirInformacoes(); // Chama a implementa��o da classe base
    // Adicione aqui qualquer informa��o espec�fica de Relatorio
}

