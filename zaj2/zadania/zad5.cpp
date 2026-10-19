#include <iostream>
#include <format>

int main()
{

    std::cout<<"\n\nZadanie 5\n\n";

    char tab = '\n';
    std::cout<<std::format("{:x} \n\n", tab);

    return 0;
}
