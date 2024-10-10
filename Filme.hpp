#ifndef FILME_HPP
#define FILME_HPP

#include <iostream>
#include <vector>
#include <string>
#include "Diretor.hpp"
#include "Ator.hpp"

using namespace std;

class Filme {
private:
    string nome;
    int ano;
    Diretor *diretor; // ponteiro para um diretor
    vector<Ator*> elenco; // vector de ponteiros para ator

public:
    Filme(string nome = "", int ano = 0); // construtor
    void setNome(string n); // altera nome do filme
    string getNome() const; // obtem nome do filme
    void setAno(int a); // altera ano do filme
    int getAno() const; // obtem ano do filme
    void setDiretor(Diretor* d); // altera diretor do filme
    Diretor* getDiretor() const; // obtem diretor do filme
    int getNumAtores() const; // obtem número de atores do filme
    string getNomeAtor(int index) const; // obtem o nome de ator do filme pelo índice
    void addAtor(Ator *a); // adiciona ator ao filme
    void removeAtor(Ator *a); // remove ator do filme
    bool pesquisaAtor(string n) const; // verifica se ator faz parte do filme
    string str() const; // metodo str
};

#endif
