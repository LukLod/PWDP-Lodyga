#include <iostream>
#include <format>

int main(){

    for(int i=0;i<11;i++){

        for(int j=0;j<11;j++){

            std::string s = "";

            s=std::to_string(j*i);

            if(j==0){
                s=std::to_string(i);
            }
            if(i==0){
                s=std::to_string(j);
            }
            if(i==0 && j==0){
                s='*';
            }

            std::cout<<std::format("{:>5}", s);

        }

        std::cout<<"\n";

    }
    return 0;
}