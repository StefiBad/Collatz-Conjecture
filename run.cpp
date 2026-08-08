#include <iostream>
using namespace std;
int main(){
    long long int n;
    int steps = 0;
    cout << "Enter a number: ";
    cin >> n;
    if(n <= 0){
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
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
    }
    cout << "\n";
    cout << "Number of steps: " << steps << endl;
    return 0;
}