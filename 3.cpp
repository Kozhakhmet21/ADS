#include <iostream>

using namespace std;


struct st{
    private:
        int * a; // Осылай а-ны int типтес пойнтер қылыамыз, ол адресті ғана сақтайды санның.
        // Ол жалпы массивтегі 1-ші ячиканың указателі болады. Массивтің өзі емес.
        int topIndex;

// Осылай жай ғана пойнтермен число набор жасап белгісіз размерімен жасауға болады..
    
    public:
    st(int n){ // Ослай белгісіз санды бере береміз.
        a = new int[n]; 
        /*
        Енді ол бір ғана емес, бірнеше жаңа сандардың адресін алып, белгілі бір жерге сақтау үшін new деген керек.
        Солай ол бір ғана санның адр. қадалып тұрмау үшін new int[new_number] арқылы жаңа бір адр. алып және сол санға жаңа памяттен орын ашады. 
        Солай кілең адрестті набор числовты сақтайды. 
        Онсыз ол жаңадан памяттен орын ашпайды.
        */
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

    int d[] = {1, 10, 2, 3, 5, 4};
    int n = sizeof(d) / sizeof(int);

    st s(n);

    for(int i = 0; i < n; ++i){
        s.push(d[i]);
    }

    for(int i = 0; i < n; ++i){
        cout << s.top() << endl; // Жай шығарып экр. өшр. отрамыз. 
        s.pop();
    }

    return 0;
}