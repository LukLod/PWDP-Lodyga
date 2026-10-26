#include <iostream>


int main()
{
    std::string slowo;
    std::cout << "Wpisz słowo do wypisania wspak: " << std::endl;
    std::cin>>slowo;
    std::cout<<"\n";
    int len = slowo.length();

    for(int i=len; i>0; i--){
        std::cout<<slowo[i-1];
    }
    return 0;
}
