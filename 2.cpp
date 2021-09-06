#include <iostream>

using namespace std;


struct st{

/*
Осылайда private деп оның ішіндегі нәрселерге доступ жабуға болады.
Яғни оның ішіндегі нәрселер тек осы структура үшін ғана тиесілі, ал қалған басқада функ. немесе стрк. үшін ол не доступнно болады.
*/
    private: 
        int a[100];
        int topIndex;
    
    public: // Ал public деп оның ішіндегі нәрселер барлығы үшін доступнно қылуға болады.
    st(){
        topIndex = -1;
    }

    int top(){
        if(topIndex == -1) return -1;
        return a[topIndex];
    }

    void push(int x){
        topIndex++;
        a[topIndex] = x;
    }

    void pop(){
        if(topIndex != -1){
            topIndex--;
        }
    }
};


int main(){

    st s;

    int d[] = {1, 10, 2, 3, 5, 4};
    int n = sizeof(d) / sizeof(int);

    for(int i = 0; i < n; ++i){
        s.push(d[i]);
    }

    for(int i = 0; i < n; ++i){
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}