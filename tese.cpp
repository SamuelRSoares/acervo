#include "tese.h"
#include <iostream>

using namespace std;

// Implementa��o dos m�todos
Tese::Tese() : TrabalhoDeConclusao() {
}

Tese::Tese(string titulo, string data_publicacao, string autores,
                       string data_emprestimo, string data_devolucao,
                       string descricao, string local_publicacao,
                       string orientadores, string instituicao, float nota,
                       string area_conhecimento, string curso, string palavras_chave)
    : TrabalhoDeConclusao(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
                          descricao, local_publicacao, orientadores, instituicao, nota,
                          area_conhecimento, curso, palavras_chave) {
}

// Implementa��o do m�todo para imprimir informa��es
void Tese::imprimirInformacoes() {
	cout << "Informa��es da Tese: " << endl;
    TrabalhoDeConclusao::imprimirInformacoes(); // Chama a implementa��o da classe base
}

