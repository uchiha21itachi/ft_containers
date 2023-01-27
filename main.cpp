#include <iostream>
#include <vector>

int main ()
{
    std::vector<int>    intVector;
    std::vector<int>    pIntVector;
    int                 size;

    intVector.assign (10, 10);
    size = intVector.size();
    std::cout << "Size of vector is - " << size << std::endl;
    for (int i = 0; i < size; ++i)
    {
        pIntVector.push_back(intVector[i] + i);
        std::cout << "Value of vector [" << i << "] - " << intVector[i] << std::endl;
    }
    std::cout << "Understanding begin() and end() function: " << std::endl; 
    for (auto i = pIntVector.begin(); i != pIntVector.end(); ++i) 
        std::cout << *i << " "; 
 

    return (0);
}