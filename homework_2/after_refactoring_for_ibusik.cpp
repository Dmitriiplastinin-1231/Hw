#include <iostream>
#include <cmath>

using namespace std;

void fillArr (int* arr, int& sum) 
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i];
        cout << ' ';
        sum = sum + arr[i];
    }

    cout << ' ' << endl;
}

int main()
{
    // State
    int a[10], b[10], c[10];
    int sa{0}, sb{0}, sc{0};

    // First sequence
    cout << "Первая последовательнсть" << endl;
    fillArr(a, sa);

    cout << "Среднее первой последовательности = " << 1.0 * sa / 10 << endl;

    // Second sequence
    cout << "Вторая последовательность" << endl;
    fillArr(b, sb);

    cout << "Среднее второй последовательности = " << 1.0 * sb / 10 << endl;

    // Third sequencesa
    cout << "Третья последовательность" << endl;
    fillArr(c, sc);

    cout << "Среднее третьей последовательности = " << 1.0 * sc / 10 << endl;


    return 0;
}