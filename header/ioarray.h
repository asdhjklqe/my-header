#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;
template <typename T>
void inparr(T x[], int y){
    for (int i=1; i<=y; i++)
        cin >> x[i];
}
template <typename T>
void outarr(T x[], int y, int z){
    for (int i=y; i<=y+z-1; i++)
        cout << x[i] << ' ';
}
template <typename T>
int maxarr(T x[], int y){
    int maxx = x[1];
    for (int i=2; i<=y; i++)
        maxx = max(maxx, x[i]);
    return maxx;
}
template <typename T>
int minarr(T x[], int y){
    int minx = x[1];
    for (int i=2; i<=y; i++)
        minx = min(minx, x[i]);
    return minx;
}
template <typename T>
bool bin_search(T x[], int y, T z) {
    sort(x+1, x+y+1);
    int l = 1;
    int r = y;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (x[m] == z)
            return true;
        if (x[m] < z)
            l = m + 1;
        else
            r = m - 1;

    }
    return false;
}
template <typename T>
int searchfst(T x[], int y, T z) {
    for (int i=1; i<=y; i++)
        if (x[i] == z)
            return i;
    return -1;
}
template <typename T>
int searchlst(T x[], int y, T z) {
    for (int i=y; i>=1; i--)
        if (x[i] == z)
            return i;
    return -1;
}
template <typename T>
int searchwpos(T x[], int y, T z){
    int choice = getch() - 48;
    for (int i=1; i<=y; i++)
        if (x[i] == z){
            if (choice == 1)
                return i;
            else choice -= 1;
        }
    return -1;
}
template <typename T>
T sumarr(T x[], int y, int z){
    T s=0;
    for (int i=y; i<=y+z-1; i++)
        s+=x[i];
    return s;
}
template <typename T>
T occurence(T x[], int y, int z, T xx){
    int s = 0;
    for (int i=y; i<=y+z-1 ; i++)
        if (x[i] == xx)
            s+= 1;
    return s;
}
