#include "n_2.hpp"
int main() {
    int ar[1000];
    fill(ar, 100);
    bubbleSort(ar, 100);    <-- не принимаается
    show(ar, 100);  <-- если это задание номер 1, то кажется эта функция написана немного не так
    cout << ar[cMax(ar, 100)] << ": " << cDig(ar, 100, cMax(ar, 100)) << " | " << ar[cMin(ar, 100)] << ": " << cDig(ar, 100, cMin(ar, 100)) << endl;
}
