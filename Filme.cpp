#include "Filme.hpp"
#include <sstream>

#define MAX_ATORES 10

Filme::Filme(string n, int a) {
    setNome(n);
    setAno(a);
    diretor = nullptr;
}

void Filme::setNome(string n) { nome = n; }//altera nome
string Filme::getNome() const { return nome; }//obtem nome
void Filme::setAno(int a) { ano = a; }//altera ano
int Filme::getAno() const { return ano; }//obtem ano
void Filme::setDiretor(Diretor *d) { diretor = d; }//altera diretor
Diretor *Filme::getDiretor() const { return diretor; }//obtem direor
int Filme::getNumAtores() const { return elenco.size(); }//obtem num de atores

string Filme::getNomeAtor(int i) const {//obtem ator?
    if (i >= 0 && i < elenco.size())
        return elenco[i]->getNome();
    else
        return "";
}

void Filme::addAtor(Ator *a) {//adiciona ator
    if (elenco.size() < MAX_ATORES)
        elenco.push_back(a);
        
}

void Filme::removeAtor(Ator *a) {
    for (auto it = elenco.begin(); it != elenco.end(); ++it) {
        if ((*it)->getNome() == a->getNome()) {
            elenco.erase(it);
            break;
        }
    }
}

bool Filme::pesquisaAtor(string n) const {
    for (auto it = elenco.begin(); it != elenco.end(); ++it) {
        if ((*it)->getNome() == n) {
            return true;
        }
    }
    return false;
}

string Filme::str() const {
    stringstream ss;
    ss << "Filme: " << getNome();
    ss << " (" << getAno() << ")" << endl;
    if (diretor != nullptr) {
        ss << "Diretor: " << diretor->getNome() << endl;
    } else {
        ss << "Diretor: Não especificado" << endl;
    }
    ss << "Atores: " << endl;
    for (auto it = elenco.begin(); it != elenco.end(); ++it) {
        ss << "-- " << (*it)->getNome() << endl;
    }
    return ss.str();
}


