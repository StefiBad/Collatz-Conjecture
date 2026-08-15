#include <iostream>
using namespace std;
void processCollatz(unsigned long long n){
    int steps = 0;
    int stepsBelowN = -1;
    const unsigned long long initialValue = n;
    unsigned long long maxHeight = n;
    cout << "N = " << n << ": ";
    while(n > 1){
        if(n % 2 == 0){
            n = n / 2;
        }else{
            n = 3 * n + 1;
        }
        if(n > maxHeight){
            maxHeight = n;
        }
        if(steps > 0){
            cout << ", ";
        }
        cout << n;
        steps++;
        if(stepsBelowN == -1 && n < initialValue){
            stepsBelowN = steps;
        }
    }
    cout << "\nSteps: " << steps << endl;
    if(stepsBelowN != -1){
        cout << "Steps to drop below N: " << stepsBelowN << endl;
    }else{
        cout << "Steps to drop below N: N/A" << endl;
    }
    cout << "Maximum height reached: " << maxHeight << "\n\n";
}
int main(){
    int numPowers;
    cout << "Enter the number of powers (2^k - 1) to calculate: ";
    cin >> numPowers;
    if(numPowers <= 0){
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    if(numPowers > 63){
        cout << "Warning: Maximum supported power with unsigned long long is 63." << endl;
        return 1;
    }
    for(int k = 1; k <= numPowers; k++){
        unsigned long long value = (1ULL << k) - 1;
        cout << "=== Power 2^" << k << " - 1 ===" << endl;
        processCollatz(value);
    }
    return 0;
}