#include<iostream>
using namespace std;

int main(){

    // !Q-1 Swap the next number increment by 2

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

    // !Q-2 Find the unique number

    // int arr[5] = {3, 4, 3, 5, 5};
    // int n = 5;
    // int unique;
    // for (int i = 0; i < n; i++){
    //     int count = 0;
    //     for (int j = 0; j < n; j++){
    //         if(arr[i] == arr[j]){
    //             count++;
    //         }
    //     }

    //     if(count == 1){
    //         unique = arr[i];
    //         break;
    //     }
        
    // }

    // cout << "Unique number is " << unique;


    // ! Q-3 Unique occurance

    // int arr[6] = {3, 4, 5, 5, 4, 4};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int storeUniqueNums[1000];
    // int index = 0;
    // int uniqueCount = 0;

    // for (int i = 0; i < n; i++){
    //     bool found = false;
    //     for (int j = 0; j < uniqueCount; j++){
    //         if(arr[i] == storeUniqueNums[j]){
                
    //         }
    //     }

    //     cout << arr[i] << " occur" << count << " times"<<endl;
    // }

    // !Q-4 Find duplicates

    int arr[9] = {1, 22, 3, 22, 4, 3, 5, 7, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int duplicateArray[100];
    int index = 0;
    

    for (int i = 0; i < n; i++){
        bool alreadyPresent = false;
        for (int j = 0; j < index; j++){
            if(arr[i] == duplicateArray[j]){

                alreadyPresent = true;
                break;
            }
        }


        if(!alreadyPresent){
            for (int k = i + 1; k < n; k++){
                if(arr[i] == arr[k]){
                    duplicateArray[index] = arr[i];
                    index++;
                }
            }
        }
    }

    for (int i = 0; i < index; i++){
        cout << duplicateArray[i] << " ";
    }

}
