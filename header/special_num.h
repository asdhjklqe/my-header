#include <iostream>
#include <cmath>
#include <C:\codeblock\library\digits.h>
using namespace std;
bool cprime(int x){
    if (x <= 1)
        return false;
    else
        for (int i=2; i<=round(sqrt(x)); i++)
            if (x%i == 0)
                return false;
    return true;
}
bool cdprime(int x){
    if (!cprime(x))
        return false;
    for (int i=2; i<=round(sqrt(sumdig(x))); i++)
        if (sumdig(x)%i == 0)
            return false;
    return true;
}

