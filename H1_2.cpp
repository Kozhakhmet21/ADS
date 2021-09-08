#include <iostream>
using namespace std;


struct q{
    int a[10000];
    int i;

    q(){
        i = 0;
    }

    void push(int n){
        a[i] = n;
    }

    void pop(){
        v.erase(v.begin());
    }

    int front(){
        return *v.begin();
    }

    void Insert(int k){
        // int mid = v.size() / 2;
        int mid = v.size() / 2 + v.size() % 2;
        v.insert(v.begin() + mid, k);
    }
};

int main(){
    q res;

    string t;
    int n, k;

    cin >> n;

    for (int i=0; i<n; ++i){
        cin >> t;
        if (t == "+"){
            cin >> k;
            res.push(k);
        }
        else if (t == "-"){
            cout <<  res.front() << endl;
            res.pop();
        }
        else if (t == "*"){
            cin >> k;
            res.Insert(k);
        }
    }
}