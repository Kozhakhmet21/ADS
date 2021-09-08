#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


struct stk{
    vector<char> v;

    void push(char n){
        v.push_back(n);
    }

    void pop(){
        v.pop_back();
    }

    int size(){
        return v.size();
    }

    bool Empty(){
        if (v.empty()) return true;
        return false;
    }
};

int main(){
    stk st;

    string t;

    cin >> t;

    bool correct = true;

    for (int i=0; i<t.size(); ++i){
        if (t[i] == '('){
            st.push('(');
        }
        else if (t[i] == ')'){
            if (!st.Empty()){
                st.pop();
            } else{
                correct = false;
                break;
            }
        }
    }

    for (int i=0; i<t.size(); ++i){
        if (t[i] == '['){
            st.push('[');
        }
        else if (t[i] == ']'){
            if (!st.Empty()){
                st.pop();
            } else{
                correct = false;
                break;
            }
        }
    }

    for (int i=0; i<t.size(); ++i){
        if (t[i] == '{'){
            st.push('{');
        }
        else if (t[i] == '}'){
            if (!st.Empty()){
                st.pop();
            } else{
                correct = false;
                break;
            }
        }
    }

    if (t == " ") cout << "yes";
    else if (!st.Empty() || correct == false) cout << "no";
    else cout << "yes";
}