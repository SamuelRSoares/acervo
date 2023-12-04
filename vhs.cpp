// vhs.cpp
#include "vhs.h"
#include <iostream>

using namespace std;

// Implementa��o dos m�todos
VHS::VHS() : Midia() {
}

VHS::VHS(string titulo, string data_publicacao, string autores,
         string data_emprestimo, string data_devolucao,
         string descricao, string local_publicacao,
         string produtora, int duracao_min)
    : Midia(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
            descricao, local_publicacao, produtora, duracao_min) {
}

// Implementa��o do m�todo para imprimir informa��es
void VHS::imprimirInformacoes() {
	cout << "Informa��es do VHS: " << endl;
    Midia::imprimirInformacoes(); // Chama a implementa��o da classe base
}

