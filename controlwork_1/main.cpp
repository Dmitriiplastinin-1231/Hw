#include <iostream>


int main()
{
    const int data [] = {3, 6, 5, 9, 10};

    int max = data[0];
    int min = data[0];


    std::cout << "Вывод массива: ";
    const char format = ' ';
    for (int num : data)
    {
        if (num < min)
        {
            min = num;
        } else if (num > max)
        {
            max = num;
        }

        std::cout << num << format;
    }


    std::cout << std::endl << "Вывод максимального и минимального элементов: ";
    std::cout 
        << max 
        << format 
        << min 
        << std::endl;


    std::cout << "Вывод во сколько раз максимальное значение больше минимального: ";
    std::cout << (float) max / min << std::endl;

    return 0;
}
