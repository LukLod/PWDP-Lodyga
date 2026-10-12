#include <iostream>

//using namespace std;

int main()
{
    std::string imie;
    std::string nazwisko;

    std::cout << "Zadanie 1\n\n";

    std::cout<<"podaj swoje imię: ";
    std::cin>>imie;
    std::cout<<"\npodaj nazwisko: ";
    std::cin>>nazwisko;
    std::cout<<"\nnazywasz się "+imie+" "+nazwisko+"\n\n";

    std::cout<<"Zadanie 2\n\n";

    std::cout<<sizeof("Zakopane")<<std::endl;
    std::cout<<sizeof("237")<<std::endl;
    std::cout<<sizeof("Szczecin")<<std::endl<<std::endl;

    std::cout<<sizeof("ścieśnić")<<std::endl;
    std::cout<<sizeof("Kraków")<<std::endl<<std::endl;

    std::string s1 = "5";
    std::string s3 = "kot";
    std::string s7 = "sigma21";

    std::cout<<sizeof(s1)<<std::endl;
    std::cout<<sizeof(s3)<<std::endl;
    std::cout<<sizeof(s7)<<std::endl;

    std::cout<<"\n\nZadanie 3\n\n";

    std::cout<<"\033[0;32m"+imie+" \033[0;31m"+nazwisko+"\033[0;97m";

    std::cout<<"\n\nZadanie 4\n\n";

    char c1 = 0xC4;
    char c2 = 0x84;
    char c3 = 0x0a;

    std::cout<<c1+' '+c2+' '+c3;

    return 0;
}
