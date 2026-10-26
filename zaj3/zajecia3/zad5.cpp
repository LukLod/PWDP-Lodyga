#include <iostream>

int main(){

    std::string wyraz="";
    std::cin>>wyraz;

    for(int i=0; i<wyraz.length(); i++){

        if(i%2==0){
        std::cout<<"\033[0;31m"<<wyraz[i];
        }
        if(i%2==1){
            std::cout<<"\033[0;32m"<<wyraz[i];
        }
    }

    std::cout<<"\033[0m";

}