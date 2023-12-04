#include "jornal.h"
#include <iostream>

using namespace std;

// Implementação dos métodos
Jornal::Jornal() : Periodico() {
}

Jornal::Jornal(string titulo, string data_publicacao, string autores,
               string data_emprestimo, string data_devolucao,
               string descricao, string local_publicacao,
               string issn, string area_tematica)
    : Periodico(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
                descricao, local_publicacao, issn, area_tematica) {
}

// Implementação do método para imprimir informações
void Jornal::imprimirInformacoes() {
	cout << "Informações do jornal: " << endl;

    Periodico::imprimirInformacoes(); // Chama a implementação da classe base
    // Adicione aqui qualquer informação específica de Jornal
}

