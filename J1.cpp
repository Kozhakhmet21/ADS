#include <iostream>
using namespace std;


int efc(int a, int b){
    while(a!=0 && b!=0){
        if (a>b) a = a % b;
        else b = b % a;
    }
    return a+b;
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << efc(a,b);
}