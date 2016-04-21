#include "movie.h"


Pilha* criaPilha (int qde)
{
    Pilha* p = new Pilha;
    p->pos = 0;
    p->next = new Movie[qde];
    return p;
}

Pilha* inserePilha (Pilha* pilha, Movie filme)
{
    pilha->next[pilha->pos] = filme;
    pilha->pos++;

    return pilha;
}

void apagaPilha (Pilha* pilha)
{
    delete[] pilha;
}

void listaTodosFilmes (Pilha* pilha)
{
    //system("clear");
    //std::cout << "Item cadastrado:" << std::endl;

    for (int i = 0; i < pilha->pos; i++)
    {
        std::cout << "Nome: " << pilha->next[i].name << std::endl;
        std::cout << "Ano: " << pilha->next[i].year << std::endl;
        std::cout << "Duração: " << pilha->next[i].duration << std::endl;
        std::cout << std::endl;
    }
}

Pilha* menuCriaPilha(int* qde)
{
    std::string tmp;

    std::cout << "Informe a quantidade de itens na pilha: ";
    getline(std::cin, tmp);
    //Converte de forma segura para INT, evitando usar o CIN
    std::stringstream convOpcao(tmp);
    convOpcao >> *qde;

    return criaPilha(*qde);
}

Movie menuAdicionaFilme()
{
    int ano, duracao;
    std::string nome, tmp;
    Movie* filme;

    filme = new Movie;
    std::cout << "Entre com o nome do filme: ";
    getline(std::cin, nome);
    filme->name = nome;

    std::cout << "Entre com o ano do filme: ";
    getline(std::cin, tmp);

    //Converte de forma segura para INT, evitando usar o CIN
    std::stringstream convAno(tmp);
    convAno >> ano;
    filme->year = ano;

    std::cout << "Entre com a duração do filme: ";
    getline(std::cin, tmp);

    //Converte de forma segura para INT, evitando usar o CIN
    std::stringstream convDuracao(tmp);
    convDuracao >> duracao;
    filme->duration = duracao;

    std::cout << "Deseja cadastrar outro item? Sim/Não" << std::endl;
    getline(std::cin, tmp);

    return *filme;
}

Movie menuProcuraFilme(Pilha* p)
{
    std::string nomeFilme;
    Movie m;

    std::cout << "Informe o nome do filme que deseja procurar: ";
    getline(std::cin, nomeFilme);

    for (int i = 0; i < p->pos; i++)
    {
        Movie m = p->next[i];
        if (m.name == nomeFilme)
            break;
    }

    return m;
}

int menuGerencia()
{
    int opcao;
    std::string tmp;

    do
    {
        std::cout << "|--------------------------------|" << std::endl;
        std::cout << "|----- Olá, seja bem vindo! -----|" << std::endl;
        std::cout << "|--------------------------------|\n" << std::endl;

        std::cout << "Informe o que deseja fazer: " << std::endl;
        std::cout << "1 - Criar pilha" << std::endl;
        std::cout << "2 - Adicionar filme" << std::endl;
        std::cout << "3 - Editar filme" << std::endl;
        std::cout << "4 - Remover filme" << std::endl;
        std::cout << "5 - Procurar filme" << std::endl;
        std::cout << "6 - Listar toda pilha" << std::endl;
        std::cout << "7 - Excluir pilha" << std::endl;
        getline(std::cin, tmp);
        //Converte de forma segura para INT, evitando usar o CIN
        std::stringstream convOpcao(tmp);
        convOpcao >> opcao;
        system("clear");
    } while(opcao < 1 && opcao > 7);

    return opcao;
}


void menuPilha()
{
    bool cont = true;
    int qde, ano, duracao, opcao;
    int* qdePilha;
    std::string nome, tmp;
    Pilha* pilha;
    Movie* filme;

    system("clear");
    std::cout << "| Você selecionou a opção: PILHA |\n";
    std::cout << "|--------------------------------|\n\n";

    opcao = menuGerencia();

    switch (opcao)
    {
        case 1:
            pilha = menuCriaPilha(qdePilha);
            break;
        case 2:
            int qdeItens = *qdePilha;
            do
            {
                pilha->next[qdeItens--] = menuAdicionaFilme();
            } while(qdeItens);
            break;/*
        case 3:
            //menuPilha();
            break;
        case 4:
            //menuPilha();
            break;
        case 5:
            //menuPilha();
            break;*/
        case 6:
            Movie m = menuProcuraFilme(pilha);
            if (m.name != "")
            {
                std::cout << "Nome: " << m.name << std::endl;
                std::cout << "Ano: " << m.year << std::endl;
                std::cout << "Duração: " << m.duration << std::endl;
                std::cout << std::endl;
            }
            break;
        case 7:
            //menuPilha();
            break;
    }






    system("clear");

    std::cout << "Todos os registros:" << std::endl;
    listaTodosFilmes(pilha);

    apagaPilha (pilha);
    std::cout << "(PILHA) Pilha limpa da memória!";
    //std::cout << "(BUSCA) Entre com o nome do filme: ";
}
/*
    Movie* searchMovie (Movie* filme, std::string nome)
    {
        Movie* i = inf;
        for (; i != NULL && i->name != nome; i = i->next);

        if (i != NULL)
        {
            std::cout << "Nome: " << i->name << std::endl;
            std::cout << "Ano: " << i->year << std::endl;
            std::cout << "Duração: " << i->duration << std::endl;
            std::cout << std::endl;
        }
        else
        {
            std::cout << "Filme não encontrado!" << std::endl;
        }

        return i;
    }
    Movie* editMovie (Movie* filme, std::string filme, std::string nome, int ano, int duracao)
    {
        Movie* findMovie = searchMovie(inf, filme);

        Movie* newMovie = findMovie;
        newMovie->name = nome;
        newMovie->year = ano;
        newMovie->duration = duracao;
        newMovie->next = findMovie->next;

        return newMovie;
    }
    void deleteMovie ()
    {

    }
*/