#include <iostream>
using namespace std;
int main(){
    long long int n;
    int steps, option;
    cout << "Enter an initial number: ";
    cin >> n;
    if(n <= 0){
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    cout << "Enter a number of reverse steps: ";
    cin >> steps;
    if(steps <= 0){
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    cout << "Do you want to focus on multiplying n only by 2 (option 1) or reverse 3n + 1 when possible (option 2)? (Select 1 or 2): ";
    cin >> option;

    int ignoredPosition = 0;
    long long int ignoredValue = 0;
    int encounterCount = 0;

    if(option == 2){
        cout << "Enter encounter position of (n-1)/3 to skip (0 for none): ";
        cin >> ignoredPosition;
        cout << "Enter specific n value to skip (n-1)/3 for (0 for none): ";
        cin >> ignoredValue;
    }

    cout << n << ": ";
    while(steps > 0){
        if(option == 1){
            n *= 2;
            cout << n;
            if(steps > 1){
                cout << ", ";
            }
            else{
                cout << ".";
            }
            steps--;
        }else if(option == 2){
            if(n % 6 == 4){
                encounterCount++;

                if(encounterCount == ignoredPosition || n == ignoredValue){
                    n *= 2;
                }else{
                    n = (n - 1) / 3;
                }
            }
            else{
                n *= 2;
            }
            cout << n;
            if(steps > 1){
                cout << ", ";
            }
            else{
                cout << ".";
            }
            steps--;
        }else{
            cout << "Invalid option!";
            cout << "Do you want to focus on multiplying n only by 2 (option 1) or reverse 3n + 1 when possible (option 2)? (Select 1 or 2): ";
            cin >> option;
        }
    }
    cout << "\n";
    return 0;
}