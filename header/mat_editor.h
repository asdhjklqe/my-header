#include <iostream>
#include <cmath>
using namespace std;
template <typename T>
void delrow(T x[][100], int &n, int m, int y, int z){
    for (int i=y; i<=n-z; i++)
        for (int j=1; j<=m; j++)
            x[i][j] = x[i+z][j];
    n-= z;
}
template <typename T>
void delcol(T x[][100], int n, int &m, int y, int z){
    for (int i=1; i<=n; i++)
        for (int j=y; j<=m-z; j++)
            x[i][j] = x[i][j+z];
    m-= z;
}
template <typename T>
void addcol(T x[][100], int n, int &m, int y, int z){
    for (int i=1; i<=n; i++)
        for (int j=y; j<=m+z; j++){
            x[i][j+z] = x[i][j];
            cin >> x[i][j];
        }
    m+= z;
}
