#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= n - row ; col++)
        {
            cout << "  ";
        }

        
        for (int star = 1; star <= row ; star++)
        {
            cout << char(64 + star) << " ";
        }


        cout << endl;
    }
}