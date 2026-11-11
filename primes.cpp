#include <iostream>
using namespace std;
bool isPrime(long long num){
    if(num <= 1) return false;
    for(long long i = 2; i * i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
void processCollatz(long long n){
    long long original = n;
    int steps = 0;
    int stepsBelowN = -1;
    long long maxHeight = n;
    cout << "Prime N = " << n << ":\nSequence: ";
    while(n > 1){
        if(n % 2 == 0){
            n = n / 2;
        } else {
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
        if(stepsBelowN == -1 && n < original){
            stepsBelowN = steps;
        }
    }
    cout << "\nNumber of steps: " << steps << endl;
    if(stepsBelowN != -1){
        cout << "Steps to drop below initial: " << stepsBelowN << endl;
    } else {
        cout << "Steps to drop below initial: N/A" << endl;
    }
    cout << "Max height reached: " << maxHeight << "\n" << endl;
}
int main(){
    long long totalPrimesNeeded;
    cout << "Enter the number of primes to check: ";
    cin >> totalPrimesNeeded;
    if(totalPrimesNeeded <= 0){
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }
    cout << "\n--- Evaluating Collatz for the first " << totalPrimesNeeded << " primes ---\n" << endl;
    long long primesFound = 0;
    long long currentNumber = 2;
    while(primesFound < totalPrimesNeeded){
        if(isPrime(currentNumber)){
            processCollatz(currentNumber);
            primesFound++;
        }
        currentNumber++;
    }
    return 0;
}