#include "dvd.h"
#include <iostream>

using namespace std;

// Implementa��o dos m�todos
DVD::DVD() : Midia() {
}

DVD::DVD(string titulo, string data_publicacao, string autores,
         string data_emprestimo, string data_devolucao,
         string descricao, string local_publicacao,
         string produtora, int duracao_min)
    : Midia(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
            descricao, local_publicacao, produtora, duracao_min) {
}

// Implementa��o do m�todo para imprimir informa��es
void DVD::imprimirInformacoes() {
	cout << "Informa��es do DVD: " << endl;
    Midia::imprimirInformacoes(); // Chama a implementa��o da classe base
}

