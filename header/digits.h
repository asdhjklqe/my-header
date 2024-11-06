#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int countdig(int x){
    int s = 0;
    while (x>0){
        s+=1;
        x/=10;
    }
    return s;
}
template <typename T>
T divdig(T x, int y){
    T path = x/pow(10,y-1);
    return path%10;
}
int sumdig(int x){
    int s = 0;
    for (int i=1; i<=countdig(x); i++)
        s+= divdig(x, i);
    return s;
}
long long reverse_num(long long x) {
    long long reversedx = 0;
    while (x != 0) {
        int digit = x % 10;
        reversedx = reversedx * 10 + digit;
        x /= 10;
    }
    return reversedx;
}
