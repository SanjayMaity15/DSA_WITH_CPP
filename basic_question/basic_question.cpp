#include <iostream>
#include <typeinfo>
#include <math.h>

using namespace std;

int fact(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{

    // 1. Positive and Negative number

    // int userInputNumber;
    // cout << "Enter number: ";
    // cin >> userInputNumber;

    // if (userInputNumber > 0)
    // {
    //     cout << userInputNumber << " is positive number";
    // }
    // else if (userInputNumber == 0)
    // {
    //     cout << userInputNumber << " Equal to zero";
    // }
    // else
    // {
    //     cout << userInputNumber << " is negative number";
    // }

    // 2. Sum of numbers in a given range

    // int starting = 5, ending = 10;

    // int sum = 0;
    // for (int i = starting; i <= ending; i++){
    //     sum += i;
    // }

    // cout << sum;

    // 3. Prime number

    // int number = 15;

    // bool isPrime = true;
    // if (number == 0 || number == 1)
    // {
    //     cout << "Not prime";
    //     return 0;
    // }

    // for (int i = 2; i < number; i++)
    // {
    //     if (number % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }

    // cout << isPrime ? "Prime" : "Not prime";

    // 4. Sum of digits of a number

    // int number = 23124;

    // int sum = 0;

    // while (number != 0)
    // {
    //     int digit = number % 10;
    //     sum += digit;
    //     number /= 10;
    // }

    // cout << sum;

    // 5. Reverse a number

    // int number = 23124;

    // int rev = 0;

    // while (number != 0)
    // {
    //     int digit = number % 10;
    //     rev = (rev * 10) + digit;
    //     number /= 10;
    // }

    // cout << rev;

    // 6. Armstrong number

    // int num = 407;
    // int temp = num;
    // int temp2 = num;
    // int length = 0;
    // int sum = 0;

    // while (temp2)
    // {
    //     length++;
    //     temp2 /= 10;
    // }

    // while (num != 0)
    // {
    //     int digit = num % 10;
    //     sum += pow(digit, length);
    //     num /= 10;

    // }

    // if(temp == sum){
    //     cout << "Armstrong number";
    // }else{
    //     cout << "Not armstong number";
    // }

    // 7. Fibonacci series

    // int num = 15;
    // int a = 0, b = 1;

    // for (int i = 0; i < num; i++){
    //     int next = a + b;
    //     a = b;
    //     b = next;
    // }
    // cout << a << ' ';

    // 8. prime factor

    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // cout << "Prime factors of " << n << ": ";

    // // Step 1: Divide by 2 until it's no longer even
    // while (n % 2 == 0)
    // {
    //     cout << 2 << " ";
    //     n /= 2;
    // }

    // // Step 2: Try odd numbers from 3 up to sqrt(n)
    // for (int i = 3; i * i <= n; i += 2)
    // {
    //     while (n % i == 0)
    //     {
    //         cout << i << " ";
    //         n /= i;
    //     }
    // }

    // // Step 3: If n is still > 2, it's a prime number
    // if (n > 2)
    //     cout << n;

    // cout << endl;
    // return 0;

    // 9. Strong number

    // int n = 135;
    // int temp = n;
    // int sum = 0;
    // while (n != 0)
    // {
    //     int digit = n % 10;
    //     sum += fact(digit);
    //     n /= 10;
    // }

    // if(temp == sum){
    //     cout << "Strong number";
    // }else{
    //     cout << "Not strong number";
    // }

    // 10. Automorphic number

    int n = 890625;
    int temp = n;
    int temp2 = n;
    int length = 0;
    while (temp != 0)
    {
        length++;
        temp /= 10;
    }

    

    int square = n * n;
    
    int rev = 0;
    int count = 0;
    while (temp2 != 0)
    {
        count++;
        if (count <= length)
        {
            int digit = temp2 % 10;

            rev = (rev * 10) + digit;

            temp2 /= 10;
        }
    }

    int num = 0;

    while (rev != 0)
    {
        int digit = rev % 10;
        num = (num * 10) + digit;
        rev /= 10;
    }
    

    if(num == n){
        cout << "Yes";
    }else{
        cout << "No";
    }
}