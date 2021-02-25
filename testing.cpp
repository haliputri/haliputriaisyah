#include <iostream>

int main(){
    int f = 1;
    for (int i=1; i<=5; i++){
        f *= i;
    }
    std::cout<<f;
}