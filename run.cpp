#include <iostream>
using namespace std;
int main(){
    long long int n;
    int steps = 0;
    int stepsBelowN = -1;
    cout << "Enter a number: ";
    cin >> n;
    if(n <= 0){
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    const long long int initialN = n;
    long long int maxHeight = n;
    cout << n << ": ";
    while(n > 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
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
        if(stepsBelowN == -1 && n < initialN){
            stepsBelowN = steps;
        }
    }
    cout << "\n";
    cout << "Number of steps: " << steps << endl;
    if(stepsBelowN != -1){
        cout << "Steps to drop below " << initialN << ": " << stepsBelowN << endl;
    }else{
        cout << "Steps to drop below " << initialN << ": N/A" << endl;
    }
    cout << "Maximum height reached: " << maxHeight << endl;
    return 0;
}