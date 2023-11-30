#include "livro.h"
#include <iostream>
#include <vector>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	system("chcp 1252 > nul");
	
    Livro livro1(
        "1234567890",    // ISBN
        "Editora A",     // Editora
        300,             // Número de Páginas
        1,               // Edição
        2,               // Volume
        "Título do Livro",
        "01/01/2000",    // Data de Publicação
        "Autor 1, Autor 2",
        "01/01/2022",    // Data de Empréstimo
        "01/02/2022",    // Data de Devolução
        "Livro interessante",  // Descrição
        "Biblioteca A"         // Local de Publicação
    );

    Livro livro2(
        "0987654321",
        "Editora B",
        250,
        2,
        1,
        "Outro Livro",
        "01/01/2005",
        "Autor 3",
        "01/03/2022",
        "01/04/2022",
        "Ótima leitura",
        "Biblioteca B"
    );

    // Criar um vetor de itens (incluindo Livros)
    vector<Item *> acervo;
    acervo.push_back(&livro1);
    acervo.push_back(&livro2);

    // Iterar sobre o acervo e imprimir informações
   for (vector<Item *>::iterator it = acervo.begin(); it != acervo.end(); ++it) {
        (*it)->imprimirInformacoes();
        cout << "-------------------------------------\n";
    }
    return 0;
}

