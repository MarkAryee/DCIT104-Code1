// Online C++ compiler to run C++ program online

#include <iostream>

int limit;

int sum;

int main() {

    std::cout<<"Enter the last number"<<std::endl;

    std::cin>>limit;

    

    std::cout<<"The numbers are:"<<std::endl;

    

    for(int i = 1; i<limit; i+=2){

        std::cout<<i<<std::endl;

        sum+=i;

    };

    

    std::cout<<"The sum is ";

    std::cout<<sum;

    return 0;

}
