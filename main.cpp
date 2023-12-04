#include "livro.h"
#include "cartaz.h"
#include "mapa.h"
#include "cd.h"
#include "vhs.h"
#include "dvd.h"
#include "relatorio.h"
#include "tese.h"
#include "dissertacao.h"
#include "monografia.h"
#include "revista.h"
#include "jornal.h"
#include <iostream>
#include <vector>
#include <locale>

using namespace std;

void imprimirSeparador() {
    cout << "-------------------------------------\n";
}

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

    Cartaz cartaz1(
        "T�tulo do Cartaz",
        "01/01/2021",    // Data de Publica��o
        "Autor do Cartaz",
        "01/01/2022",    // Data de Empr�stimo
        "01/02/2022",    // Data de Devolu��o
        "Cartaz interessante",  // Descri��o
        "Biblioteca E",         // Local de Publica��o
        "�rea Tem�tica X"
    );

    Mapa mapa1(
        "T�tulo do Mapa",
        "01/01/2018",    // Data de Publica��o
        "Autor do Mapa",
        "01/01/2022",    // Data de Empr�stimo
        "01/02/2022",    // Data de Devolu��o
        "Mapa interessante",  // Descri��o
        "Biblioteca F",         // Local de Publica��o
        "Escala Y"
    );

    CD cd1(
        "T�tulo do CD",
        "01/01/2015",    // Data de Publica��o
        "Artista do CD",
        "01/01/2022",    // Data de Empr�stimo
        "01/02/2022",    // Data de Devolu��o
        "CD interessante",  // Descri��o
        "Biblioteca G",         // Local de Publica��o
        "Gravadora Z",
        60  // Dura��o em minutos
    );

    VHS vhs1(
        "T�tulo do VHS",
        "01/01/2000",    // Data de Publica��o
        "Diretor do VHS",
        "01/01/2022",    // Data de Empr�stimo
        "01/02/2022",    // Data de Devolu��o
        "VHS interessante",  // Descri��o
        "Biblioteca H",         // Local de Publica��o
        "Produtora W",
        120  // Dura��o em minutos
    );

    DVD dvd1(
        "T�tulo do DVD",
        "01/01/2010",    // Data de Publica��o
        "Diretor do DVD",
        "01/01/2022",    // Data de Empr�stimo
        "01/02/2022",    // Data de Devolu��o
        "DVD interessante",  // Descri��o
        "Biblioteca I",         // Local de Publica��o
        "Produtora Q",
        90  // Dura��o em minutos
    );

    Relatorio relatorio1(
        "T�tulo do Relat�rio",
        "01/01/2019",    // Data de Publica��o
        "Autor do Relat�rio",
        "01/01/2022",    // Data de Empr�stimo
        "01/02/2022",    // Data de Devolu��o
        "Relat�rio interessante",  // Descri��o
        "Biblioteca J"         // Local de Publica��o
    );

    Tese tese2(
        "T�tulo da Tese 2",
        "01/01/2016",    // Data de Publica��o
        "Autor Tese 2",
        "01/01/2022",    // Data de Empr�stimo
        "01/02/2022",    // Data de Devolu��o
        "Tese interessante 2",  // Descri��o
        "Biblioteca K",              // Local de Publica��o
        "Orientador 7, Orientador 8",
        "Institui��o E",
        8.0,             // Nota
        "�rea Cient�fica",
        "Curso G",
        "Palavra7, Palavra8"
    );

    Dissertacao dissertacao2(
        "T�tulo da Disserta��o 2",
        "01/01/2012",    // Data de Publica��o
        "Autor Disserta��o 2",
        "01/01/2022",    // Data de Empr�stimo
        "01/02/2022",    // Data de Devolu��o
        "Disserta��o interessante 2",  // Descri��o
        "Biblioteca L",              // Local de Publica��o
        "Orientador 9, Orientador 10",
        "Institui��o F",
        9.2,             // Nota
        "�rea Cient�fica",
        "Curso H",
        "Palavra9, Palavra10"
    );

    Monografia monografia2(
        "T�tulo da Monografia 2",
        "01/01/2008",    // Data de Publica��o
        "Autor Monografia 2",
        "01/01/2022",    // Data de Empr�stimo
        "01/02/2022",    // Data de Devolu��o
        "Monografia interessante 2",  // Descri��o
        "Biblioteca M",              // Local de Publica��o
        "Orientador 11, Orientador 12",
        "Institui��o G",
        9.8,             // Nota
        "�rea Cient�fica",
        "Curso I",
        "Palavra11, Palavra12"
    );

    Revista revista1(
        "T�tulo da Revista",
        "01/01/2022",    // Data de Publica��o
        "Autores da Revista",
        "01/01/2022",    // Data de Empr�stimo
        "01/02/2022",    // Data de Devolu��o
        "Revista interessante",  // Descri��o
        "Biblioteca N",              // Local de Publica��o
        "1234-5678",     // ISSN
        "�rea Tem�tica Z"
    );

    Jornal jornal1(
        "T�tulo do Jornal",
        "01/01/2022",    // Data de Publica��o
        "Autores do Jornal",
        "01/01/2022",    // Data de Empr�stimo
        "01/02/2022",    // Data de Devolu��o
        "Jornal interessante",  // Descri��o
        "Biblioteca O",              // Local de Publica��o
        "8765-4321",     // ISSN
        "�rea Tem�tica W"
    );

    // Criar um vetor de itens (Livros, Cartazes, Mapas, CDs, VHSs, DVDs, Relat�rios, Teses, Disserta��es, Monografias, Revistas e Jornais)
    vector<Item *> acervo;
    acervo.push_back(&livro1);
    acervo.push_back(&cartaz1);
    acervo.push_back(&mapa1);
    acervo.push_back(&cd1);
    acervo.push_back(&vhs1);
    acervo.push_back(&dvd1);
    acervo.push_back(&relatorio1);
    acervo.push_back(&tese2);
    acervo.push_back(&dissertacao2);
    acervo.push_back(&monografia2);
    acervo.push_back(&revista1);
    acervo.push_back(&jornal1);

    // Iterar sobre o acervo e imprimir informa��es
    for (vector<Item *>::iterator it = acervo.begin(); it != acervo.end(); ++it) {
        (*it)->imprimirInformacoes();
        imprimirSeparador();
    }

    return 0;
}

