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
                n = (n - 1) / 3;
            }
            else{
                n *= 2;
            }
            cout << n;
            if(steps > 1){
                cout << ", ";
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