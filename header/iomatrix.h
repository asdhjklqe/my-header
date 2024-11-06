#include <iostream>
#include <cmath>
using namespace std;
template <typename T>
void inpmat(T x[][100] ,int y ,int z){
    for (int i=1; i<=y; i++)
        for (int j=1; j<=z; j++)
            cin >> x[i][j];
}
template <typename T>
void outmat(T x[][100], int y, int z){
    for (int i=1; i<=y; i++){
        for (int j=1; j<=z; j++)
            cout << x[i][j] << ' ';
        cout << '\n';
    }
}
template <typename T>
T maxmat(T x[][100], int y , T z){
    T maxx = x[1][1];
    for (int i=1; i<=y; i++)
        for (int j=1; j<=z; j++)
            maxx = fmax(maxx, x[i][j]);
    return maxx;
}
template <typename T>
T minmat(T x[][100], int y, T z){
    t  minx = x[1][1];
    for (int i=1; i<=y; i++)
        for (int j=1; j<=z; j++)
            minx = fmin(minx, x[i][j]);
    return minx;
}
