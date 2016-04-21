#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>

typedef struct movie
{
    int year;
    std::string name;
    int duration;
} Movie;
Movie* criaFilme (Movie* filme);
Movie* insereFilme (Movie* filme, std::string nome, int ano, int duracao);
Movie* editaFilme (Movie* filme, std::string nomeFilme, std::string nome, int ano, int duracao);
Movie* apagaFilme (Movie* filme);
Movie* procuraFilme (Movie* filme, std::string nome);
//Movie* listaTodosFilmes (Movie* filme);
//void freeListMovie (Movie* filme);


//Menu
Movie* menuInsere();
Movie* menuEdita(Movie* filme);


//Pilha
typedef struct pilha
{
    int pos;
    Movie* next;
} Pilha;
void menuPilha ();
Pilha* criaPilha (int qde);
Pilha* inserePilha (Pilha* pilha, Movie filme);
Pilha* editaPilha (Movie* inf, std::string filme, std::string nome, int ano, int duracao);
void apagaPilha (Pilha* pilha);
void listaTodosFilmes (Movie* filme);

/*
typedef struct lista
{
    int year;
    std::string name;
    int duration;
    struct lista* next;
} Lista;
//Lista
Movie* criaLista (int qde);
Movie* insereLista (Lista* lista, std::string nome, int ano, int duracao);
Movie* editaLista (Lista* lista, std::string filme, std::string nome, int ano, int duracao);
void apagaLista ();
Movie* procuraFilme (Lista* lista, std::string nome);
Movie listaTodosFilmes (Lista* lista);

//Fila
typedef struct fila
{
    Movie* movie;
    struct fila* next;
} Fila;
Movie* criaFila (int qde);
Movie* insereLista (Movie* l, std::string nome, int ano, int duracao);
Movie* editaMovie (Movie* inf, std::string filme, std::string nome, int ano, int duracao);
void apagaMovie ();
Movie* procuraFilme (Movie* inf, std::string nome);
Movie listaTodosFilmes (Movie* inf);
void freeListMovie (Movie* inf);
*/