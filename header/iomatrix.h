#include <iostream>
#include <cmath>
using namespace std;
void inpmat(int x[][100] ,int y ,int z){
    for (int i=1; i<=y; i++)
        for (int j=1; j<=z; j++)
            cin >> x[i][j];
}
void outmat(int x[][100], int y, int z){
    for (int i=1; i<=y; i++){
        for (int j=1; j<=z; j++)
            cout << x[i][j] << ' ';
        cout << '\n';
    }
}
int maxmat(int x[][100], int y , int z){
    int maxx = x[1][1];
    for (int i=1; i<=y; i++)
        for (int j=1; j<=z; j++)
            maxx = fmax(maxx, x[i][j]);
    return maxx;
}
int minmat(int x[][100], int y, int z){
    int minx = x[1][1];
    for (int i=1; i<=y; i++)
        for (int j=1; j<=z; j++)
            minx = fmin(minx, x[i][j]);
    return minx;
}
