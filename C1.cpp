#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


struct dq{
    vector<int> v;

    string push_front(int n){
        v.insert(v.begin(), n);
        return "ok";
    }

    string push_back(int n){
        v.push_back(n);
        return "ok";
    }

    string pop_front(){
        if (v.empty()) return "error";
        int k = * v.begin();
        stringstream rs;
        rs << k;
        v.erase(v.begin());
        return rs.str();
    }

    string pop_back(){
        if (v.empty()) return "error";
        int k = v[v.size() - 1];
        stringstream rs;
        rs << k;
        v.pop_back();
        return rs.str();
    }

    string front(){
        if (v.empty()) return "error";
        stringstream rs;
        int k = * v.begin();
        rs << k;
        return rs.str();
    }

    string back(){
        if (v.empty()) return "error";
        stringstream rs;
        int k = v[v.size() - 1]; // v.back() деген функцияда бар.
        // Осы жерде абайлау керек, себебі * v.end() деп соңғы санның мәнін алуға болады деуге болмайды, бұл қате.
        // v.end() ол әрқашан не сущест. мәнге тең болады, сондықтан ол контейнердің соңғы мәнін көрсете алмайды. Осындайдан абайлау керек.
        rs << k;
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
    dq a;

    string t;
    int n;

    while(true){
        cin >> t;
        if (t == "exit"){
            cout << a.exit() << endl;
            return 0;
        }
        else if (t == "push_front"){
            cin >> n;
            cout << a.push_front(n) << endl;
        }
        else if (t == "push_back"){
            cin >> n;
            cout << a.push_back(n) << endl;
        }
        else if (t == "pop_front"){
            cout << a.pop_front() << endl;
        }
        else if (t == "pop_back"){
            cout << a.pop_back() << endl;
        }
        else if (t == "front"){
            cout << a.front() << endl;
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
    }
}