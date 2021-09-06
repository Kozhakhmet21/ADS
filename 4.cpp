#include <iostream>

using namespace std;


/*
Жалпы обч. массив мәндерді бір-біріне жақындасып сактайды виз. жағынан, яғни [],[],[]...[].
Ал мынандай жолмен, олар массив секілді бір бойында емес виз. жағынан әр жақтарда сақталынып тұрад.
Олар жаңа әрқайсысы бір жеке адр. алып отырады, тізбектей емес. Оларды шақыру үшін адр. -> арқ. шақырамыз.
*/

struct node{
    int val;
    node * next;
    node * prev;
    // Сол стркю типтес ссылка екеуіде.

    node(int x){
        val = x;
        next = NULL;
        prev = NULL;
    }
};

struct st{
    private:
        node * tail; // Яғни top секілді ең соңғы қос. элементті алып отырамыз.
    
    public:
    st(){
        tail = NULL;
    }

    int top(){
        if(tail != NULL){
            return tail->val; // Пока пустой болмағанша, сол адрестегі элементті -> бойынша сылать етіп мәнін аламыз.
        }
        return -1;
    }

    void push(int x){
       node * item = new node(x);
       if(tail == NULL){
           tail = item;
       }else{
            tail->next = item;
            item->prev = tail;
            tail = item;
       }
    }

    void pop(){
        if(tail != NULL){
            tail = tail->prev;
            if(tail != NULL){
                tail->next = NULL;
            }
        }
    }

    bool empty(){
        return tail == NULL;
    }

};


int main(){

    int d[] = {1, 10, 2, 3, 5, 4};
    int n = sizeof(d) / sizeof(int);

    st  * s = new st;

    for(int i = 0; i < n; ++i){
        s->push(d[i]);
    }

    while(!s->empty()){
        cout << s->top() << endl;
        s->pop();
    }

    return 0;
}