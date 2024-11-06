#include <iostream>
#include <C:\codeblock\header\digits.h>
using namespace std;
template <typename T>
bool cprime(T x){
    if (x <= 1)
        return false;
    else
        for (T i=2; i*i<=x; i++)
            if (x%i == 0)
                return false;
    return true;
}
template <typename T>
bool cdprime(T x){
    if (!cprime(x))
        return false;
    for (T i=2; i*i<=sumdig(x); i++)
        if (sumdig(x)%i == 0)
            return false;
    return true;
}
