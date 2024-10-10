#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Filme;

class Pessoa {
private:
    string nome;
    vector<Filme*> filmes; // vector de filmes no qual participou

public:
    Pessoa(string n = ""); // construtor
    string getNome() const; // obtem nome
    void setNome(string n); // define nome
    vector<Filme*> getFilmes() const; // retorna o vector de filmes que pessoa participa
    string str() const; // metodo str que retorna infos da pessoa
};

#endif
