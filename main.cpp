#include <iostream>

int main()
{
    int tempoDeDuracao = 0;
    std::cout<<"\nDigite o tempo de duração do evento: ";
    std::cin>>tempoDeDuracao;
    int minutos = tempoDeDuracao / 60;
    int segundos = tempoDeDuracao % 60;
    int horas = minutos / 60;
    minutos = minutos % 60;
    std::cout<<"Tempo de duração: "<<horas<<":"<<minutos<<":"<<segundos<<"\n";
}
