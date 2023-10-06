#include <iostream>
#include "DynamicArrays.cpp"

int main()
{
    DynamicArray<int> DA(10);

    for (int i = 0; i < 20; ++i)
    {
        DA.add(i);
    }

    for (int i = 0; i < 20; ++i)
    {
        std::cout << "Value at [i]: ";
        std::cout << DA.getByElement(i) << std::endl;
    }
    std::cout << "Calling removeByElement at index [10]...15 fucking times" << std::endl;
    for (int i = 0; i < 15; ++i)
    {
        DA.removeByElement(10);
    }
    std::cout << DA.getByElement(0);
    for (int i = 1; i < 20; i++) {
        std::cout << ", " << DA.getByElement(i);
    }
    std::cout << std::endl;
    std::cout << "Calling getByElement function 20 times..." << std::endl;
    for (int i = 0; i < 20; ++i)
    {
        std::cout << DA.getByElement(i) << std::endl;
    }

    return 0;
}