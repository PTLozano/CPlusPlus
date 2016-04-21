#include "movie.h"

class GerenciaFila {
    public:
        void listAllMovies (Movie* inf)
        {
            system("clear");
            std::cout << "Item cadastrado:" << std::endl;

            for (Movie* i = inf; i != NULL; i = i->next)
            {
                std::cout << "Nome: " << i->name << std::endl;
                std::cout << "Ano: " << i->year << std::endl;
                std::cout << "Duração: " << i->duration << std::endl;
                std::cout << std::endl;
            }
        }

        Movie* searchMovie (Movie* inf, std::string nome)
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
        Movie* insertMovie (Movie* l, std::string nome, int ano, int duracao)
        {
            Movie* newMovie = new Movie;
            newMovie->name = nome;
            newMovie->year = ano;
            newMovie->duration = duracao;
            newMovie->next = l;

            return newMovie;
        }
        Movie* editMovie (Movie* inf, std::string filme, std::string nome, int ano, int duracao)
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
        Movie* createList (int qde)
        {
            return NULL;
        }
        void freeListMovie (Movie* inf)
        {
            free(inf);
        }




        /*
    Lista l;
    l.list = l.createList(qde);

    system("clear");
    do
    {

        std::cout << "Entre com o nome do filme: ";
        getline(std::cin, nome);

        std::cout << "Entre com o ano do filme: ";
        getline(std::cin, tmp);

        //Converte de forma segura para INT, evitando usar o CIN
        std::stringstream convAno(tmp);
        convAno >> ano;

        std::cout << "Entre com a duração do filme: ";
        getline(std::cin, tmp);

        //Converte de forma segura para INT, evitando usar o CIN
        std::stringstream convDuracao(tmp);
        convDuracao >> duracao;

        std::cout << std::endl;
        l.list = l.insertMovie(l.list, nome, ano, duracao);
    } while(--qde);

    system("clear");

    l.listAllMovies(l.list);


    std::cout << "(BUSCA) Entre com o nome do filme: ";
    getline(std::cin, busca);

    Info* inf = l.searchMovie(l.list, busca);

    l.freeListMovie(l.list);
    */
};