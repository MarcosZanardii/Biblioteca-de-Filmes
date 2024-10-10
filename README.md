# Gerenciamento de Filmes

Este projeto é um sistema em C++ para gerenciar filmes, atores e diretores. Ele permite ao usuário cadastrar e consultar informações sobre filmes, além de associar atores e diretores a esses filmes.

## Funcionalidades

- **Cadastro de Filmes**: Adicione novos filmes informando nome, ano, diretor e ator.
- **Consulta de Filmes**: Pesquise filmes pelo nome para exibir suas informações.
- **Cadastro de Atores e Diretores**: Adicione novos atores e diretores ao sistema.
- **Consulta de Atores e Diretores**: Pesquise atores e diretores pelo nome.
- **Associar Atores e Diretores a Filmes**: Adicione um ator ou diretor existente a um filme.

## Estrutura do Código

- `Biblioteca.hpp`: Cabeçalho da classe Biblioteca, que armazena filmes, atores e diretores.
- `Filme.hpp`: Definição da classe Filme, representando um filme.
- `Ator.hpp`: Definição da classe Ator, representando um ator.
- `Diretor.hpp`: Definição da classe Diretor, representando um diretor.
- `main.cpp`: Implementação da lógica principal do programa.

## Como Compilar

Para compilar o projeto, utilize um compilador de C++ (como `g++`) e execute o seguinte comando:

```bash
g++ -o gerenciador_filmes main.cpp
