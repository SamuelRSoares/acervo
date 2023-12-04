// relatorio.cpp
#include "relatorio.h"
#include <iostream>

using namespace std;

// Implementação dos métodos
Relatorio::Relatorio() : Item() {
}

Relatorio::Relatorio(string titulo, string data_publicacao, string autores,
                     string data_emprestimo, string data_devolucao,
                     string descricao, string local_publicacao)
    : Item(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
           descricao, local_publicacao) {
}

// Implementação do método para imprimir informações
void Relatorio::imprimirInformacoes() {
	cout << "Informações do Relatório: " << endl;
    Item::imprimirInformacoes(); // Chama a implementação da classe base
    // Adicione aqui qualquer informação específica de Relatorio
}

