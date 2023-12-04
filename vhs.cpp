// vhs.cpp
#include "vhs.h"
#include <iostream>

using namespace std;

// Implementação dos métodos
VHS::VHS() : Midia() {
}

VHS::VHS(string titulo, string data_publicacao, string autores,
         string data_emprestimo, string data_devolucao,
         string descricao, string local_publicacao,
         string produtora, int duracao_min)
    : Midia(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,
            descricao, local_publicacao, produtora, duracao_min) {
}

// Implementação do método para imprimir informações
void VHS::imprimirInformacoes() {
	cout << "Informações do VHS: " << endl;
    Midia::imprimirInformacoes(); // Chama a implementação da classe base
}

