#include <iostream>
#include <climits>
using namespace std;

int main()
{

    // int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // for (int i = 0; i < 10; i++){
    //     cout << array[i] << " ";
    // }

    // find max and min elem in array

    // int arr[10] = {3, 56, 2, 76, 289, 23, 89, 34, 90, 45};

    // int max = INT_MIN;
    // int min = INT_MAX;

    // for (int i = 0; i < 10; i++){
    //     if(max < arr[i])
    //         max = arr[i];

    //     if(min > arr[i])
    //         min = arr[i];

    // }

    // cout << "Max elem is " << max << endl;
    // cout << "Min elem is " << min << endl;

    // find the sum of array element

    // int arr[5] = {1, 2, 3, -4, 6};
    // int sum = 0;

    // for (int i = 0; i < 5; i++){
    //     sum += arr[i];
    // }

    // cout << "Sum of array is : " << sum;

    // linear search

    // int arr[5] = {1, 2, 3, 4, 5};
    // int findElem = 2;

    // for (int i = 0; i < 5; i++){
    //     if(arr[i] == findElem){
    //         cout << "Elem present at index :" << i;
    //         break;
    //     }
    // }

    // reverse an array

    int arr[5] = {1, 2, 3, 4, 5};
    // int n = 5;
    // for (int i = 0; i < 2; i++){
    //     int temp = arr[i];
    //     arr[i] = arr[(n -1) - i];
    //     arr[(n -1) - i] = temp;
    // }

    // for (int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }

    // 2nd way

    int start = 0;
    int end = 4;

    while (start <= end)
    {
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
}