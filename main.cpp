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

    Cartaz cartaz1(
        "Título do Cartaz",
        "01/01/2021",    // Data de Publicação
        "Autor do Cartaz",
        "01/01/2022",    // Data de Empréstimo
        "01/02/2022",    // Data de Devolução
        "Cartaz interessante",  // Descrição
        "Biblioteca E",         // Local de Publicação
        "Área Temática X"
    );

    Mapa mapa1(
        "Título do Mapa",
        "01/01/2018",    // Data de Publicação
        "Autor do Mapa",
        "01/01/2022",    // Data de Empréstimo
        "01/02/2022",    // Data de Devolução
        "Mapa interessante",  // Descrição
        "Biblioteca F",         // Local de Publicação
        "Escala Y"
    );

    CD cd1(
        "Título do CD",
        "01/01/2015",    // Data de Publicação
        "Artista do CD",
        "01/01/2022",    // Data de Empréstimo
        "01/02/2022",    // Data de Devolução
        "CD interessante",  // Descrição
        "Biblioteca G",         // Local de Publicação
        "Gravadora Z",
        60  // Duração em minutos
    );

    VHS vhs1(
        "Título do VHS",
        "01/01/2000",    // Data de Publicação
        "Diretor do VHS",
        "01/01/2022",    // Data de Empréstimo
        "01/02/2022",    // Data de Devolução
        "VHS interessante",  // Descrição
        "Biblioteca H",         // Local de Publicação
        "Produtora W",
        120  // Duração em minutos
    );

    DVD dvd1(
        "Título do DVD",
        "01/01/2010",    // Data de Publicação
        "Diretor do DVD",
        "01/01/2022",    // Data de Empréstimo
        "01/02/2022",    // Data de Devolução
        "DVD interessante",  // Descrição
        "Biblioteca I",         // Local de Publicação
        "Produtora Q",
        90  // Duração em minutos
    );

    Relatorio relatorio1(
        "Título do Relatório",
        "01/01/2019",    // Data de Publicação
        "Autor do Relatório",
        "01/01/2022",    // Data de Empréstimo
        "01/02/2022",    // Data de Devolução
        "Relatório interessante",  // Descrição
        "Biblioteca J"         // Local de Publicação
    );

    Tese tese2(
        "Título da Tese 2",
        "01/01/2016",    // Data de Publicação
        "Autor Tese 2",
        "01/01/2022",    // Data de Empréstimo
        "01/02/2022",    // Data de Devolução
        "Tese interessante 2",  // Descrição
        "Biblioteca K",              // Local de Publicação
        "Orientador 7, Orientador 8",
        "Instituição E",
        8.0,             // Nota
        "Área Científica",
        "Curso G",
        "Palavra7, Palavra8"
    );

    Dissertacao dissertacao2(
        "Título da Dissertação 2",
        "01/01/2012",    // Data de Publicação
        "Autor Dissertação 2",
        "01/01/2022",    // Data de Empréstimo
        "01/02/2022",    // Data de Devolução
        "Dissertação interessante 2",  // Descrição
        "Biblioteca L",              // Local de Publicação
        "Orientador 9, Orientador 10",
        "Instituição F",
        9.2,             // Nota
        "Área Científica",
        "Curso H",
        "Palavra9, Palavra10"
    );

    Monografia monografia2(
        "Título da Monografia 2",
        "01/01/2008",    // Data de Publicação
        "Autor Monografia 2",
        "01/01/2022",    // Data de Empréstimo
        "01/02/2022",    // Data de Devolução
        "Monografia interessante 2",  // Descrição
        "Biblioteca M",              // Local de Publicação
        "Orientador 11, Orientador 12",
        "Instituição G",
        9.8,             // Nota
        "Área Científica",
        "Curso I",
        "Palavra11, Palavra12"
    );

    Revista revista1(
        "Título da Revista",
        "01/01/2022",    // Data de Publicação
        "Autores da Revista",
        "01/01/2022",    // Data de Empréstimo
        "01/02/2022",    // Data de Devolução
        "Revista interessante",  // Descrição
        "Biblioteca N",              // Local de Publicação
        "1234-5678",     // ISSN
        "Área Temática Z"
    );

    Jornal jornal1(
        "Título do Jornal",
        "01/01/2022",    // Data de Publicação
        "Autores do Jornal",
        "01/01/2022",    // Data de Empréstimo
        "01/02/2022",    // Data de Devolução
        "Jornal interessante",  // Descrição
        "Biblioteca O",              // Local de Publicação
        "8765-4321",     // ISSN
        "Área Temática W"
    );

    // Criar um vetor de itens (Livros, Cartazes, Mapas, CDs, VHSs, DVDs, Relatórios, Teses, Dissertações, Monografias, Revistas e Jornais)
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

    // Iterar sobre o acervo e imprimir informações
    for (vector<Item *>::iterator it = acervo.begin(); it != acervo.end(); ++it) {
        (*it)->imprimirInformacoes();
        imprimirSeparador();
    }

    return 0;
}

