#include <iostream>

int main() {
    int array[4]={1,2,3,4};

    for(auto a:array){
        std::cout<<"original array" << std::endl;
        std::cout << a << std::endl;
    }

    for(auto& a:array){
        a=1;
    }

    for(auto a:array){
        std::cout<<"modified array" << std::endl;
        std::cout << a << std::endl;
    }
}