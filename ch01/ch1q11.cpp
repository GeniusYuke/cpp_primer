#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    int n = (v1<=v2?v1:v2);
    int m = v1+v2-n;
    while(n<=m){
        std::cout<<n<<std::endl;
        n++;
    }
    return 0;
}