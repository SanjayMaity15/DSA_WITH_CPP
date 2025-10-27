#include <iostream>
#include <climits>
using namespace std;

int main()
{

    // ! Binary search

    int arr[10] = {1, 3, 56, 67, 78, 79, 90, 343, 567, 676};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 567;

    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if(arr[mid] == target){
            cout<< mid;
            break;
        }else if(arr[mid] > target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    
    
}