#include <iostream>
#include <time.h>
#include <string.h>

using namespace std;


void fill(int* arr, int size) {
    srand(time(nullptr));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 201;
    }
}

void Swap(int& a, int& b){
    int k = a;
    a = b;
    b = k;
}

void bubbleSort(int* ar, int size){
    for (int j = 0; j < size; j++){
        for(int i = 0; i < size - 1 - j; i++){
            if (ar[i] > ar[i+1]){
                Swap(ar[i], ar[i+1]);
            }
        }
    }
}

void printAr(int* ar, int size) {
    for (int i = 0; i < size; i++) {
        cout << "[" << i << "#]\t[" << ar[i] << "]" << endl;
    }
}
