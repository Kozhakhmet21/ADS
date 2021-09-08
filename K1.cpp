#include <iostream>
using namespace std;


bool isPrime(long long n){
    for (long long i=2; i*i<=n; ++i){ // Осылай бар мүмкін болатын бөлгіштерін білуге болады i*i<=n деп.
        if (n%i==0) return false; // Осындай prime сан екенін тексеруге осындай жол өте тиімді жылдам жұмыс жасайды.
    } // i*i<n деуге болмайды, ол қате шығарады i*i<=n деп қана бар мүмк. болатын бөлг. біле аламыз.
    return true;
}

int main(){
    long long n;
    cin >> n;

    if (isPrime(n) == true && n!=1) cout << "prime";
    else cout << "composite";
}