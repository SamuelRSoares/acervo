#ifndef DISSERTACAO_H
#define DISSERTACAO_H

#include "trabalho_de_conclusao.h"
#include <string>

using namespace std;

class Dissertacao : public TrabalhoDeConclusao {
public:
    // Construtores
    Dissertacao();
    Dissertacao(string titulo, string data_publicacao, string autores,
               string data_emprestimo, string data_devolucao,
               string descricao, string local_publicacao,
               string orientadores, string instituicao, float nota,
               string area_conhecimento, string curso, string palavras_chave);

    // Método para imprimir informações
    void imprimirInformacoes();
};

#endif

