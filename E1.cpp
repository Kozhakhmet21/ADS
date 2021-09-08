#include <iostream>
using namespace std;


int arr1[5];
int arr2[5];

struct card{
    int cn1, cn2;

    card(){
        cn1 = 0;
        cn2 = 0;
    }

    int cnt1(){
        for (int i=0; i<5; ++i){
            if (arr1[i]>5){
                for (int j=0; j<5; ++j){
                    if (arr2[j]>arr1[i] || (arr2[j]-arr1[i])%2!=0){
                        cn1++;
                    }
                }
            }
        }
        return cn1;
    }

    int cnt2(){
        for (int i=0; i<5; ++i){
            if (arr2[i]>5){
                for (int j=0; j<5; ++j){
                    if (arr1[j]>arr2[i] || (arr1[j]-arr2[i])%2!=0){
                        cn2++;
                    }
                }
            }
        }
        return cn2;
    }

    string win(){
        if (cnt1() > cnt2()) return "first";
        return "second";
    }

    int all_motion(){
        int sm = cnt1() + cnt2();
        return sm/8;
    }

};

int main(){
    card res;

    for (int i=0; i<5; ++i){
        cin >> arr1[i];
    }

    for (int i=0; i<5; ++i){
        cin >> arr2[i];
    }

    cout << res.win() << " " << res.all_motion();
}