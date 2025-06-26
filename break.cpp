#include <iostream>
using namespace std;
#include <string>
#include <conio.h>
int main()
{
    const int size = 5;
    int array[size];
    cout << "enter 5 numbers: ";
    for (int i = 0; i < size; ++i)
    {
        cin >> array[i];
    }
    cout << "You entered: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    float avg = 0 , sum = 0;
    

    for (int avg : array)
    {
        sum += avg;
    }
    cout << " the average of the numbers is: " << sum / size;
    getch();
}
