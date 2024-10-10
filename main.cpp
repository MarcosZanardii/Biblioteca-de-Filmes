#include <iostream>
#include "Biblioteca.hpp"
#include "Filme.hpp"
#include "Ator.hpp"
#include "Diretor.hpp"

using namespace std;

Biblioteca bib;

void cadastroFilme() {
    string nome, ator, diretor;
    int ano;
    
    cout << "Nome do Filme: ";
    cin >> nome;
    cout << "Ano do Filme: ";
    cin >> ano;
    
    do {
        cout << "Inserir diretor e ator (no mínimo 1 diretor e 1 ator): " << endl;
        cin >> diretor >> ator;
    } while (diretor == "" || ator == "");
    
    Filme *f = new Filme(nome, ano);
    Ator *a = new Ator(ator);
    Diretor *d = new Diretor(diretor);
    
    bib.addFilme(f);
    bib.addAtor(a);
    bib.addDiretor(d);
    
    f->addAtor(a);
    f->setDiretor(d);
    
    cout << "Filme adicionado com sucesso!" << endl;
}

void consultaFilme() {
    string nome;
    cout << "Nome do Filme: ";
    cin >> nome;
    
    Filme *filme = bib.getFilme(nome);
    if (filme) {
        cout << filme->str() << endl;
    } else {
        cout << "Filme não encontrado." << endl;
    }
}

void cadastroAtor() {
    string n;
    cout << "Nome do Ator: ";
    cin >> n;
    
    Ator *a = new Ator(n);
    bib.addAtor(a);
    
    cout << "Ator adicionado com sucesso!" << endl;
}

void consultaAtor() {
    string nome;
    cout << "Nome do Ator: ";
    cin >> nome;
    
    Ator *ator = bib.getAtor(nome);
    if (ator) {
        cout << "Ator: " << ator->getNome() << endl;
    } else {
        cout << "Ator não encontrado." << endl;
    }
}

void cadastroDiretor() {
    string n;
    cout << "Nome do Diretor: ";
    cin >> n;
    
    Diretor *d = new Diretor(n);
    bib.addDiretor(d);
    
    cout << "Diretor adicionado com sucesso!" << endl;
}

void consultaDiretor() {
    string nome;
    cout << "Nome do Diretor: ";
    cin >> nome;
    
    Diretor *diretor = bib.getDiretor(nome);
    if (diretor) {
        cout << "Diretor: " << diretor->getNome() << endl;
    } else {
        cout << "Diretor não encontrado." << endl;
    }
}

void adicionarAtorAFilme() {
    string nomeAtor, nomeFilme;
    cout << "Informe o nome do ator: ";
    cin >> nomeAtor;
    cout << "Informe o nome do filme: ";
    cin >> nomeFilme;

    Filme *filme = bib.getFilme(nomeFilme);
    if (filme) {
        Ator *ator = new Ator(nomeAtor);
        if (ator) {
            filme->addAtor(ator);
            cout << "Ator adicionado ao filme com sucesso!" << endl;
        } else {
            cout << "Ator não encontrado." << endl;
        }
    } else {
        cout << "Filme não encontrado." << endl;
    }
}

void adicionarDiretorAFilme() {
    string nomeDiretor, nomeFilme;
    cout << "Informe o nome do diretor: ";
    cin >> nomeDiretor;
    cout << "Informe o nome do filme: ";
    cin >> nomeFilme;

    Filme *filme = bib.getFilme(nomeFilme);
    if (filme) {
        Diretor *diretor = bib.getDiretor(nomeDiretor);
        if (diretor) {
            filme->setDiretor(diretor);
            cout << "Diretor adicionado ao filme com sucesso!" << endl;
        } else {
            cout << "Diretor não encontrado." << endl;
        }
    } else {
        cout << "Filme não encontrado." << endl;
    }
}

int main() {
    cout << "---    Gerenciamento de Filmes - T2 / POO   ---" << endl;
    cout << "--- Para encerrar o programa, pressione |.| ---" << endl;
    cout << endl;
    
    bool fim = false;
    string c;
    
    while (!fim) {
        cout << "--------------- Qual opção realizar? ---------------" << endl;
        cout << "+F  - Adicionar Filme   | F  - Consultar Filme" << endl;
        cout << "+A  - Adicionar Ator    | A  - Consultar Ator" << endl;
        cout << "+D  - Adicionar Diretor | D  - Consultar Diretor" << endl;
        cout << "AF  - Add Ator a Filme  | AD - Add Diretor a Filme" << endl;
        
        cin >> c;

        if (c == "+F") {
            cadastroFilme();
        } else if (c == "F") {
            consultaFilme();
        } else if (c == "+A") {
            cadastroAtor();
        } else if (c == "A") {
            consultaAtor();
        } else if (c == "+D") {
            cadastroDiretor();
        } else if (c == "D") {
            consultaDiretor();
        } else if (c == "AF") {
            adicionarAtorAFilme();
        } else if (c == "AD") {
            adicionarDiretorAFilme();
        } else if (c == ".") {
            cout << "---------------Programa finalizado---------------" << endl;
            fim = true;
        } else {
            cout << "Opção inválida. Tente novamente." << endl;
        }
    }
    
     /*if (arqAtor.is_open()) {
        for (auto it = bib.atores.begin(); it != bib.atores.end(); ++it) {
            arqAtor << (*it)->str() << endl;
        }
        arqAtor.close();
    } else {
        cout << "Erro ao abrir o arquivo de atores." << endl;
    }*/

    return 0;
}
