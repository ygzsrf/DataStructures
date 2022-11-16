#include <iostream>
using namespace std;

// n! = n*(n-1)*(n-2)*.....*3*2*1

int factorial(int n){
    int i, result;
    result = 1;

    for (i = 1; i <= n; i++){
        result = result * i;
    }
    return (result);
}

int main(){
    int q;
    cout << "Number: ";
    cin >> q;

    cout << "Factorial of " << q << " = " << factorial(q) << endl;
}