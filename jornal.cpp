#include "jornal.h"
#include <iostream>

using namespace std;

// Implementa��o dos m�todos
Jornal::Jornal() : Periodico() {
}

Jornal::Jornal(string titulo, string data_publicacao, string autores,
               string data_emprestimo, string data_devolucao,
               string descricao, string local_publicacao,
               string issn, string area_tematica)
    : Periodico(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
                descricao, local_publicacao, issn, area_tematica) {
}

// Implementa��o do m�todo para imprimir informa��es
void Jornal::imprimirInformacoes() {
	cout << "Informa��es do jornal: " << endl;

    Periodico::imprimirInformacoes(); // Chama a implementa��o da classe base
    // Adicione aqui qualquer informa��o espec�fica de Jornal
}

