#include<iostream>
using namespace std;

int main (){

    // int a = 5, b = 8;

    // cout << "a&b = " << (a & b)<<endl;
    // cout << "a|b = " << (a | b)<<endl;
    // cout << "~a = " << ~a<<endl;
    // cout << "a^b = " << (a ^ b);

    // decimal to binary

    // int dec = 10;
    // int result = 0, mul = 1;
    // while(dec != 0){
    //     int digit = dec % 2;

    //     result = (digit * mul) + result;
    //     dec /= 2;
    //     mul *= 10;
    // }

    // cout << result;

    // Decimal to ocatal

    // int dec = 10;
    // int result = 0, mul = 1;
    // while(dec != 0){
    //     int digit = dec % 8;

    //     result = (digit * mul) + result;
    //     dec /= 8;
    //     mul *= 10;
    // }

    // cout << result;

    // binary to decimal


    int dec = 1000;
    int result = 0, mul = 1;
    while(dec != 0){
        int digit = dec % 10;

        result = (digit * mul) + result;
        dec /= 10;
        mul *= 2;
    }

    cout << result;


}

