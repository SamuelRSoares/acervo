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
        300,             // N�mero de P�ginas
        1,               // Edi��o
        2,               // Volume
        "T�tulo do Livro",
        "01/01/2000",    // Data de Publica��o
        "Autor 1, Autor 2",
        "01/01/2022",    // Data de Empr�stimo
        "01/02/2022",    // Data de Devolu��o
        "Livro interessante",  // Descri��o
        "Biblioteca A"         // Local de Publica��o
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
        "�tima leitura",
        "Biblioteca B"
    );

    // Criar um vetor de itens (incluindo Livros)
    vector<Item *> acervo;
    acervo.push_back(&livro1);
    acervo.push_back(&livro2);

    // Iterar sobre o acervo e imprimir informa��es
   for (vector<Item *>::iterator it = acervo.begin(); it != acervo.end(); ++it) {
        (*it)->imprimirInformacoes();
        cout << "-------------------------------------\n";
    }
    return 0;
}

