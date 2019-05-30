#include <iostream>

int main()
{
    std::cout << "Enter numbers:" << std::endl;
    int sum = 0;
    int n=0;
    while(std::cin>>n){
        sum+=n;
    }
    std::cout<<sum<<std::endl;
    return 0;
}