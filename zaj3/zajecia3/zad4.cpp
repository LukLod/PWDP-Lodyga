#include <iostream>

/*int collatz(int c_n, int iter){

    if (iter==1){
        return c_n;
    }
    else{
        if(c_n%2==0){
            int c_n1=c_n/2;
            return collatz(c_n1, iter-1);
        }
        if(c_n%2==1){
        int c_n1=3*c_n+1;
        return collatz(c_n1, iter-1);
        }
    }

}
*/



int main(){

    int c_n = 0;
    std::cin>>c_n;

    for(int i=1; i<22;i++ ){
        std::cout<<c_n<<" ";
        if(c_n%2==0){
            c_n=c_n/2;
        }
        if(c_n%2==1){
            c_n=3*c_n+1;
        }
        //std::cout<<std::to_string(collatz(c_n, i))<<" ";
    }

    return 0;
}