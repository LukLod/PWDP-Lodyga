#include <iostream>


/*double potegadzielenia(double k, double n){

    double a = (k/n)*(k/n);
    return a;

}

*/
int main()
{
    double n = 100'000'000;

    double suma = 0;

    for(int i=0; i<n; i++){
        double a = (i/n)*(i/n);
        suma +=a;
    }

    std::cout<<suma/double(n);
    return 0;
}
