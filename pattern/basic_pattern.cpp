#include<iostream>
using namespace std;

int main(){

    int n = 5;
    int value = 1;

    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= 5; col++){
            cout << value << " ";
            value++;
        }

        cout << endl;
    }
}