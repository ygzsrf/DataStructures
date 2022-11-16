#include <iostream>
using namespace std;

int triangle(int n){
    int total = 0;
    
    while (n > 0){
        total = total + n;
        --n;
    }
    return total;
}

int main(){
    int q;
    cout << "Enter a number: ";
    cin >> q;

    cout << "Result: " << triangle(q) << endl;
}