#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
template <typename T>
T countdig(T x){
    T s = 0;
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
template <typename T>
T sumdig(T x){
    int s = 0;
    for (int i=1; i<=countdig(x); i++)
        s+= divdig(x, i);
    return s;
}
template <typename T>
T reverse_num(T x) {
    string s = to_string(x);
    return s == s.reverse(s.begin(), s.end());
}
