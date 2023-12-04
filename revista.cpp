// revista.cpp
#include "revista.h"
#include <iostream>

using namespace std;

// Implementação dos métodos
Revista::Revista() : Periodico() {
}

Revista::Revista(string titulo, string data_publicacao, string autores,
                 string data_emprestimo, string data_devolucao,
                 string descricao, string local_publicacao,
                 string issn, string area_tematica)
    : Periodico(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
                descricao, local_publicacao, issn, area_tematica) {
}

// Implementação do método para imprimir informações
void Revista::imprimirInformacoes() {
	cout << "Informações da Revista: " << endl;

    Periodico::imprimirInformacoes(); // Chama a implementação da classe base
    // Adicione aqui qualquer informação específica de Revista
}

