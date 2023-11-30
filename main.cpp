#include <iostream>

int main()
{
    int idadeAnos, idadeMeses, idadeDias = 0;
    std::cout<<"\nDigite sua idade em anos: ";
    std::cin>>idadeAnos;
    std::cout<<"\nDigite sua idade em meses: ";
    std::cin>>idadeMeses;
    std::cout<<"Digite sua idade em meses: ";
    std::cin>>idadeMeses;
    int totalDiasDeVida = idadeAnos * 365 + idadeMeses * 30 + idadeDias;
    std::cout<<"Sua idade em dias é "<<totalDiasDeVida<<"\n";

}
