#include "livro.h"
#include <iostream>

using namespace std;

// Implementa��o dos m�todos
Livro::Livro() : Item(), num_paginas(0), edicao(0), volume(0) {}

Livro::Livro(string isbn, string editora, int num_paginas, int edicao, int volume,string titulo, string data_publicacao, string autores,string data_emprestimo, string data_devolucao,string descricao, string local_publicacao): Item(titulo, data_publicacao, autores, data_emprestimo, data_devolucao,descricao, local_publicacao),isbn(isbn), editora(editora), num_paginas(num_paginas), edicao(edicao), volume(volume) {}

// M�todos getters e setters espec�ficos de Livro
string Livro::getIsbn() const {
    return isbn;
}

string Livro::getEditora() const {
    return editora;
}

int Livro::getNumPaginas() const {
    return num_paginas;
}

int Livro::getEdicao() const {
    return edicao;
}

int Livro::getVolume() const {
    return volume;
}

void Livro::setIsbn(string isbn) {
    this->isbn = isbn;
}

void Livro::setEditora(string editora) {
    this->editora = editora;
}

void Livro::setNumPaginas(int num_paginas) {
    this->num_paginas = num_paginas;
}

void Livro::setEdicao(int edicao) {
    this->edicao = edicao;
}

void Livro::setVolume(int volume) {
    this->volume = volume;
}

// M�todo para imprimir informa��es (sobrescrito)
void Livro::imprimirInformacoes() const {
    Item::imprimirInformacoes(); // Chama o m�todo da classe base

    // Imprime informa��es adicionais do Livro
    cout << "ISBN: " << isbn << endl;
    cout << "Editora: " << editora << endl;
    cout << "N�mero de P�ginas: " << num_paginas << endl;
    cout << "Edi��o: " << edicao << endl;
    cout << "Volume: " << volume << endl;
}

