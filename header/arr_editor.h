#include <iostream>
#include <cmath>
using namespace std;
void del_element(int x[100], int &n, int y, int z){
    for (int i=y; i<=n-z; i++)
        x[i] = x[i+z];
    n-= z;
}
