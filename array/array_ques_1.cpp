#include<iostream>
using namespace std;

int main(){
    // int arr[13] = {1, 11, 2, 22, 3, 33, 4, 44, 5, 55, 6, 66, 7};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < size; i = i + 2){
        
    //     if((i + 1 ) < size){
    //         swap(arr[i], arr[i + 1]);
    //     }
    // }

    // for (int i = 0; i < size; i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr[5] = {3, 4, 3, 5, 5};
    int n = 5;
    int unique;
    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count == 1){
            unique = arr[i];
            break;
        }
        
    }

    



    cout << "Unique number is " << unique;
}
