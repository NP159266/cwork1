#include <iostream>
#include <time.h>

using namespace std;


int fin() {
	static int c = 0;
	c++;

	return c;
}

void fill(int* arr, int s) {
    srand(time(nullptr));
    for (int i = 0; i < s; i++) {
        arr[i] = (rand() % 101 + rand() % 151) % 151;
    }
}

void printAr(int* ar, int s) {
    for (int i = 0; i < s; i++) {
        cout << i << " : " << ar[i] << endl;
    }
}

int getmax(int *ar, int st, int end){
    fin();
    if (st == end-1) {
        return ar[st];
    }
    int cen = (st + end) / 2;
    int mx1 = getmax(ar, st, cen), mx2 = getmax(ar, cen, end);
    return (mx1 > mx2) ? mx1 : mx2;
}

int getmin(int *ar, int st, int end){
    fin();
    if (st == end-1) {
        return ar[st];
    }
    int cen = (st + end) / 2;
    int mn1 = getmin(ar, st, cen), mn2 = getmin(ar, cen, end);
    return (mn1 < mn2) ? mn1 : mn2;
}
