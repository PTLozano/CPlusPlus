#include "movie.h"

Movie* menuInsere()
{
    int ano, duracao;
    std::string nome, tmp;
    Movie* filme = new Movie;

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

    return filme;
}

Movie* menuEdita(Movie* filme)
{
    int ano, duracao;
    std::string tmp;
    Movie* film = filme;

    std::cout << "Caso deseje alterar é só digitar o que deseja nas solicitações" << std::endl;
    std::cout << "caso não deseje, pressione enter em digitar nada" << std::endl;
    std::cout << "Entre com o nome do filme: ";
    getline(std::cin, tmp);
    if (tmp != "")
        film->name = tmp;

    tmp = "";

    std::cout << "Entre com o ano do filme: ";
    getline(std::cin, tmp);

    //Converte de forma segura para INT, evitando usar o CIN
    std::stringstream convAno(tmp);
    if (tmp != "")
    {
        convAno >> ano;
        film->year = ano;
    }
    tmp = "";

    std::cout << "Entre com a duração do filme: ";
    getline(std::cin, tmp);

    //Converte de forma segura para INT, evitando usar o CIN
    std::stringstream convDuracao(tmp);
    if (tmp != "")
    {
        convDuracao >> duracao;
        film->duration = duracao;
    }

    return film;
}