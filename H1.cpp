#include <iostream>
#include <vector>
using namespace std;


struct q{
    vector<int> v;

    void push(int n){
        v.push_back(n);
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