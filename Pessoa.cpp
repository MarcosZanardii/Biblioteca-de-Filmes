#include "Pessoa.hpp"
#include "Filme.hpp"
#include <sstream>


Pessoa::Pessoa(string n) { setNome(n); }//construtor
string Pessoa::getNome() const { return nome; }//obtem nome
void Pessoa::setNome(string n) { nome = n; }//altera nome
vector<Filme*> Pessoa::getFilmes() const { return filmes; }//obtem filmes da pessoa
string Pessoa::str() const {
    stringstream ss;
    ss << getNome() << endl;
    ss << "Filmes :" << endl;
    for (int i = 0; i < filmes.size(); i++)
        ss << "-" << filmes[i]->getNome() << endl;

    return ss.str();
}
