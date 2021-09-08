#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> v;
    string t;
    int n, k;

    cin >> n;

    for (int i=0; i<n; ++i){
        cin >> t;
        if (t == "+"){
            cin >> k;
            v.push_back(k);
        }
        else if (t == "-"){
            cout <<  *v.begin() << endl;
            v.erase(v.begin());
        }
        else if (t == "*"){
            cin >> k;
            int mid = v.size() / 2 + v.size() % 2;
            v.insert(v.begin() + mid, k);
        }
    }
}