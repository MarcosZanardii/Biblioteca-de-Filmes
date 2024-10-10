#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <iostream>
#include <vector>
#include "Filme.hpp"
#include "Ator.hpp"
#include "Diretor.hpp"

using namespace std;

//biblioteca - armazenamento de filmes e suas infos
class Biblioteca {
private:
    vector<Filme*> filmes;
    vector<Ator*> atores;
    vector<Diretor*> diretores;

public:
    void addFilme(Filme *f); // adiciona filme a biblioteca 
    Filme* getFilme(const string &n) const; // obtem filme a partir do nome
    void addAtor(Ator *a); // adiciona ator a biblioteca
    Ator* getAtor(const string &n) const; // obtem ator a partir do nome
    void addDiretor(Diretor *d); // adiciona diretor a biblioteca
    Diretor* getDiretor(const string &n) const; // retorna diretor a partir do nome
};

#endif
