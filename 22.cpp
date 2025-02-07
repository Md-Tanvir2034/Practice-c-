#include<iostream>
using namespace std;

void fun(int* arr, int size) {
    int prime[size] = {0}; 

    for (int i = 0; i < size; i++) {
        bool isprime = true; 

        if (arr[i] > 1) {
            for (int j = 2; j < arr[i]; j++) {
                if (arr[i] % j == 0) {
                    isprime = false;
                    break;
                }
            }
        } else {
            isprime = false; 
        }

        if (isprime) {
            prime[i] = arr[i]; 
        }
    }

    for (int i = 0; i < size; i++) {
        if (prime[i] != 0) {
            cout << prime[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    fun(arr, size);

    return 0;
}