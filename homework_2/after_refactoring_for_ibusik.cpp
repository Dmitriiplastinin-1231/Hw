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
}

int main()
{
    // State
    int a[10], b[10], c[10];
    int sa{0}, sb{0}, sc{0};

    // First sequence
    cout << "pervaja posledovatelnost" << endl;
    fillArr(a, sa);
    
    cout << ' ' << endl;
    cout << "srednee pervoy posledovatelnocty =" << 1.0 * sa / 10 << endl;

    // Second sequence
    cout << "vtoraja posledovatelnost" << endl;
    fillArr(b, sb);

    cout << ' ' << endl;
    cout << "srednee vtoroy posledovatelnocty =" << 1.0 * sb / 10 << endl;

    // Third sequencesa
    cout << "tretja posledovatelnost" << endl;
    fillArr(c, sc);

    cout << ' ' << endl;
    cout << "srednee tretjey posledovatelnocty =" << 1.0 * sc / 10 << endl;


    return 0;
}