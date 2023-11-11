#include <iostream>
#include <vector>

int main()
{
    setlocale(0, "");

    std::vector<float> collection;
    int k = 0; 
    float element;

    while (std::cout << "\tВведите значение: ", std::cin >> element)
    {
        collection.push_back(element);
        if (collection.back() == 0) 
            break;  
    }

    std::cout << "\tКоллекция: ";
    for (int i = 0; i < collection.size(); i++) 
        std::cout << collection[i] << " | ";

    std::cout << std::endl;
    for (int i = 0; i < collection.size(); i++) 
    {
        if (collection[i] == 0)
            break;
        else if (collection[i] < collection[i + 1])
            k++;
    }

    std::cout << "\tКолличесвто элементов, которые больше предыдущих: " << k;

    return 0;
}