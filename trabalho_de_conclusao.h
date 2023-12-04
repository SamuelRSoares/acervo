#ifndef TRABALHODECONCLUSAO_H
#define TRABALHODECONCLUSAO_H

#include "item.h"
#include <string>

using namespace std;

class TrabalhoDeConclusao : public Item {
private:
    string orientadores;
    string instituicao;
    float nota;
    string area_conhecimento;
    string curso;
    string palavras_chave;

public:
    // Construtores
    TrabalhoDeConclusao();
    TrabalhoDeConclusao(string titulo, string data_publicacao, string autores,
                        string data_emprestimo, string data_devolucao,
                        string descricao, string local_publicacao,
                        string orientadores, string instituicao, float nota,
                        string area_conhecimento, string curso, string palavras_chave);

    // Métodos getters e setters
    string getOrientadores();
    string getInstituicao();
    float getNota();
    string getAreaConhecimento();
    string getCurso();
    string getPalavrasChave();

    void setOrientadores(string orientadores);
    void setInstituicao(string instituicao);
    void setNota(float nota);
    void setAreaConhecimento(string area_conhecimento);
    void setCurso(string curso);
    void setPalavrasChave(string palavras_chave);

    // Método para imprimir informações virutal puro pois a classe é abstrata
    virtual void imprimirInformacoes()=0;
};

#endif
