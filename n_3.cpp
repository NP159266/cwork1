#include "n3.hpp"

int main() {
    int ar[100];
    fill(ar, 100);
    printAr(ar, sizeof(ar) / sizeof(ar[0]));
    cout << "max: " << getmax(ar, 0, sizeof(ar) / sizeof(ar[0])) << endl;
    int g = fin();
    cout << g << endl;
    cout << "min: " << gmin(ar, 0, sizeof(ar) / sizeof(ar[0])) << endl;
    cout << fin() - g << endl;
}
