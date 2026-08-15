#include <iostream>
using namespace std;
int main(){
    long long int n;
    int steps = 0;
    int stepsBelow = -1;
    bool foundBelow = false;
    cout << "Enter a number: ";
    cin >> n;
    if(n <= 0){
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    long long int initialN = n;
    cout << n << ": ";
    while(n > 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }
        if(steps > 0){
            cout << ", ";
        }
        cout << n;
        steps++;
        if(!foundBelow && n < initialN){
            stepsBelow = steps;
            foundBelow = true;
        }
    }
    cout << "\n";
    cout << "Number of steps: " << steps << endl;
    if(foundBelow){
        cout << "Steps to drop below initial n: " << stepsBelow << endl;
    }else{
        cout << "Steps to drop below initial n: N/A (initial n <= 1)" << endl;
    }
    return 0;
}