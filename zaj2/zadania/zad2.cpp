#include <iostream>
#include <string>

int main(){

    std::cout<<"Zadanie 2\n\n";

    std::cout<<sizeof("Zakopane")<<std::endl;
    std::cout<<sizeof("237")<<std::endl;
    std::cout<<sizeof("Szczecin")<<std::endl<<std::endl;

    std::cout<<sizeof("ścieśnić")<<std::endl;
    std::cout<<sizeof("Kraków")<<std::endl<<std::endl;

    std::string s1 = "5";
    std::string s3 = "kot";
    std::string s7 = "Gargamel21";

    std::cout<<sizeof(s1)<<std::endl;
    std::cout<<sizeof(s3)<<std::endl;
    std::cout<<sizeof(s7)<<std::endl;

    return 0;

}