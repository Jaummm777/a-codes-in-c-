#include <iostream>
#include <cmath>

int main()
{
    float raio, altura = 0;
    std::cout<<"\nDigite a altura do cilindro: ";
    std::cin>>altura;
    std::cout<<"\nDigite o raio do cilindro: ";
    std::cin>>raio;
    float pi = 3.1415;
    float area = 2 * pi * raio * (altura + raio);
    float volume = pi * ((raio),2) * altura;
    std::cout<<"\n O volume do cilindro é "<<volume<<"\n";
    std::cout<<"\n A área do cilindro é "<<area<<"\n";

}
