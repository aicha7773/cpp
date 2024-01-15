#include "easyfind.hpp"

int main()
{
    std::vector<int> myVector;

    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);
    try{
        easyfind(myVector,555);
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}
