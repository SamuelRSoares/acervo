#include "trabalho_de_conclusao.h"
#include <iostream>

using namespace std;

// Implementação dos métodos
TrabalhoDeConclusao::TrabalhoDeConclusao() : Item() {
    orientadores = "";
    instituicao = "";
    nota = 0.0;
    area_conhecimento = "";
    curso = "";
    palavras_chave = "";
}

TrabalhoDeConclusao::TrabalhoDeConclusao(string titulo, string data_publicacao, string autores,
                                         string data_emprestimo, string data_devolucao,
                                         string descricao, string local_publicacao,
                                         string orientadores, string instituicao, float nota,
                                         string area_conhecimento, string curso, string palavras_chave)
    : Item(titulo, data_publicacao, autores, data_emprestimo, data_devolucao, descricao, local_publicacao) {
    this->orientadores = orientadores;
    this->instituicao = instituicao;
    this->nota = nota;
    this->area_conhecimento = area_conhecimento;
    this->curso = curso;
    this->palavras_chave = palavras_chave;
}

// Métodos getters e setters
string TrabalhoDeConclusao::getOrientadores() {
    return orientadores;
}

string TrabalhoDeConclusao::getInstituicao() {
    return instituicao;
}

float TrabalhoDeConclusao::getNota() {
    return nota;
}

string TrabalhoDeConclusao::getAreaConhecimento() {
    return area_conhecimento;
}

string TrabalhoDeConclusao::getCurso() {
    return curso;
}

string TrabalhoDeConclusao::getPalavrasChave() {
    return palavras_chave;
}

void TrabalhoDeConclusao::setOrientadores(string orientadores) {
    this->orientadores = orientadores;
}

void TrabalhoDeConclusao::setInstituicao(string instituicao) {
    this->instituicao = instituicao;
}

void TrabalhoDeConclusao::setNota(float nota) {
    this->nota = nota;
}

void TrabalhoDeConclusao::setAreaConhecimento(string area_conhecimento) {
    this->area_conhecimento = area_conhecimento;
}

void TrabalhoDeConclusao::setCurso(string curso) {
    this->curso = curso;
}

void TrabalhoDeConclusao::setPalavrasChave(string palavras_chave) {
    this->palavras_chave = palavras_chave;
}

// Método para imprimir informações
void TrabalhoDeConclusao::imprimirInformacoes() {
    Item::imprimirInformacoes(); // Chama a implementação da classe base
    cout << "Orientadores: " << orientadores << endl;
    cout << "Instituição: " << instituicao << endl;
    cout << "Nota: " << nota << endl;
    cout << "Área de Conhecimento: " << area_conhecimento << endl;
    cout << "Curso: " << curso << endl;
    cout << "Palavras-chave: " << palavras_chave << endl;
}

