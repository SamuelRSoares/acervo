#include "dissertacao.h"
#include <iostream>

using namespace std;

// Implementação dos métodos
Dissertacao::Dissertacao() : TrabalhoDeConclusao() {
}

Dissertacao::Dissertacao(string titulo, string data_publicacao, string autores,
                       string data_emprestimo, string data_devolucao,
                       string descricao, string local_publicacao,
                       string orientadores, string instituicao, float nota,
                       string area_conhecimento, string curso, string palavras_chave)
    : TrabalhoDeConclusao(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
                          descricao, local_publicacao, orientadores, instituicao, nota,
                          area_conhecimento, curso, palavras_chave) {
}

// Implementação do método para imprimir informações
void Dissertacao::imprimirInformacoes() {
	cout << "Informações da Dissertação: " << endl;
    TrabalhoDeConclusao::imprimirInformacoes(); // Chama a implementação da classe base
}

