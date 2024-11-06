#include <iostream>
#include <cmath>
using namespace std;
template <typename T>
void del_element(T x[100], int &n, int y, int z){
    for (int i=y; i<=n-z; i++)
        x[i] = x[i+z];
    n-= z;
}
