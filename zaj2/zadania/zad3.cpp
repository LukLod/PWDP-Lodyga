#include <iostream>
#include <string>
#include <format>
//using namespace std;

int main()
{
    std::string imie;
    std::string nazwisko;

    std::cout<<"\n\nZadanie 3\n\n";

    std::cout<<"podaj swoje imię: ";
    std::cin>>imie;
    std::cout<<"\npodaj nazwisko: ";
    std::cin>>nazwisko;

    std::cout<<"\033[0;32m"+imie+" \033[0;31m"+nazwisko+"\033[0m";

    return 0;

}