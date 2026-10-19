#include <iostream>
#include <string>
#include <format>
//using namespace std;

int main()
{

    std::cout<<"\n\nZadanie 6\n\n";

    std::string text;

    std::cout<<"Wpisz tekst: ";
    std::cin>>text;

    std::cout<<"Przekonwertowany tekst: ";
    for(auto l:text){
        std::cout<<std::format("{:x}", l);
    }
    return 0;
}

