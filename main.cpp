#include <iostream>
using namespace std;

int main() {
    int n=0, primo=1, secondo=0, terzo=0;
    cin >> n;
    if (n>=2){
        cout<<primo <<endl;
        for(int i=0;i<n-1; i++)
        {
            terzo=primo+secondo;
            cout<<terzo <<endl;
            secondo= primo;
            primo=terzo;
        }
    }
    else{
        cout<<"errore";
    }
   return 0;
}
