#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


struct q{
    vector<int> v;

    string push(int n){
        v.push_back(n);
        return "ok";
    }

    string pop(){
        if (v.empty()) return "error";
        stringstream rs;
        int k = * v.begin();
        rs << k;
        v.erase(v.begin());
        return rs.str();
    }

    string front(){
        if (v.empty()) return "error";
        stringstream rs;
        int k = * v.begin(); // Осылай ғана ең бірінші элм. алу үшін міндетті түрде * пойтер керек.
        rs << k; // Себебі ол .begin() ол тек қана адресті ғана көрсетеді, сол адресті мәнін алу үшін, * деген пойтер керек.
        return rs.str();
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
    q res;

    string t;
    int n;

    while(true){
        cin >> t;

        if (t == "exit"){
            cout << res.exit() << endl;
            return 0;
        }
        else if (t == "push"){
            cin >> n;
            cout << res.push(n) << endl;
        }
        else if (t == "pop"){
            cout << res.pop() << endl;
        }
        else if (t == "front"){
            cout << res.front() << endl;
        }
        else if (t == "size"){
            cout << res.size() << endl;
        }
        else if (t == "clear"){
            cout << res.clear() << endl;
        }
    }
}