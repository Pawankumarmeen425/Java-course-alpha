#include <iostream>
using namespace std;
int main()
{
    // int arr[8];
    // for (int i = 0; i < 8; i++)
    // {
    //     cout << "Enter the marks of " << i << "th student " << endl;
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < 8; i++)
    // {
    //     cout << "Marks of " << i << "th student is ::" << arr[i] << endl;
    // }

    // 2d Array
    int val[2][3] = {
        {3, 2, 5}, {6, 1, 3}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Value at the index" << i << "," << j << "is :: " <<val[i][j] << endl;
        }
    }

    return 0;
}
