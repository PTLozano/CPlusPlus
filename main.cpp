#include "movie.h"

int main()
{
    int opcao;
    std::string tmp;

    do
    {
        system("clear");
        std::cout << "|--------------------------------|" << std::endl;
        std::cout << "|----- Olá, seja bem vindo! -----|" << std::endl;
        std::cout << "|--------------------------------|\n" << std::endl;

        std::cout << "Informe o que deseja fazer: " << std::endl;
        std::cout << "1 - Gerenciar lista" << std::endl;
        std::cout << "2 - Gerenciar fila" << std::endl;
        std::cout << "3 - Gerenciar pilha" << std::endl;
        getline(std::cin, tmp);
        //Converte de forma segura para INT, evitando usar o CIN
        std::stringstream convOpcao(tmp);
        convOpcao >> opcao;
        system("clear");
    } while(opcao != 1 && opcao != 2 && opcao != 3);

    switch (opcao)
    {
        case 1:
            //menuLista();
            break;
        case 2:
            //menuFila();
            break;
        case 3:
            menuPilha();
            break;
    }
}