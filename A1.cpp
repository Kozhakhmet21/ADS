#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


struct st{
    vector<int> v;

    string push(int n){
        v.push_back(n);
        return "ok";
    }

    string pop(){
        if (v.empty()) return "error";
        stringstream r;
        int k = v[v.size()-1];
        r << k;
        v.pop_back();
        return r.str();
    }

    string back(){
        if (v.empty()) return "error";
        stringstream r;
        int k = v[v.size()-1];
        r << k;
        return r.str();
    }

    int size(){
        return v.size();
    }

    string clear(){
        while(!v.empty()){
            v.pop_back();
        }
        return "ok";
    }

    string exit(){
        return "bye";
    }
};

int main(){
    st a;

    vector<string> res;

    string t;
    int n;

    while(true){
        stringstream cont;
        cin >> t;
        if (t == "exit"){
            cout << a.exit() << endl;
            return 0;
        }
        else if (t == "push"){
            cin >> n;
            cout << a.push(n) << endl;
        }
        else if (t == "pop"){
            cout << a.pop() << endl;
        }
        else if (t == "back"){
            cout << a.back() << endl;
        }
        else if (t == "size"){
            cout << a.size() << endl;
        }
        else if (t == "clear"){
            cout << a.clear() << endl;
        }
        else continue;
    }

}