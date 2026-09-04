#include <iostream>
using namespace std;
void processCollatz(unsigned long long n){
    unsigned long long original = n;
    int steps = 0;
    while((n & (n - 1)) != 0){
        if(n % 2 == 0){
            n = n / 2;
        }else{
            n = 3 * n + 1;
        }
        steps++;
    }
    int exponent = __builtin_ctzll(n);
    cout << "N = " << original << ": ";
    cout << "The first power of 2 reached is " << n << " (2^" << exponent << ")" << endl;
    if(steps > 0){
        cout << "(" << steps << " steps)\n" << endl;
    }
    else{
        cout << "It's a power of 2 already!\n" << endl;
    }
}
int main(){
    int lim;
    cout << "Enter the limit for the number to calculate the first power of 2 for: ";
    cin >> lim;
    for(int k = 1; k <= lim; k++){
        processCollatz(k);
    }
    return 0;
}