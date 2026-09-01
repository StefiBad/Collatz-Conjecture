#include <iostream>
#include <vector>
#include <set>
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
    set<int> ignoredPositions;
    long long int ignoredValue = 0;
    int encounterCount = 0;
    vector<int> pattern;
    bool usePattern = false;
    if(option == 2){
        int numPositionsToSkip;
        cout << "How many encounter positions do you want to skip? (0 for none): ";
        cin >> numPositionsToSkip;
        if(numPositionsToSkip > 0){
            cout << "Enter the " << numPositionsToSkip << " positions (separated by spaces): ";
            for(int i = 0; i < numPositionsToSkip; i++){
                int pos;
                cin >> pos;
                ignoredPositions.insert(pos);
            }
        }
        cout << "Enter specific n value to skip (n-1)/3 for (0 for none): ";
        cin >> ignoredValue;
        char usePatternChoice;
        cout << "Do you want to enable a custom binary pattern for valid encounters (n % 6 == 4)? (y/n): ";
        cin >> usePatternChoice;
        if(usePatternChoice == 'y' || usePatternChoice == 'Y'){
            usePattern = true;
            int patternLength;
            cout << "Enter pattern length: ";
            cin >> patternLength;
            cout << "Enter " << patternLength << " binary values (1 to take (n-1)/3, 0 to force 2n): ";
            for(int i = 0; i < patternLength; i++){
                int val;
                cin >> val;
                pattern.push_back(val);
            }
        }
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
                bool allowByPattern = true;
                if(usePattern && !pattern.empty()){
                    int patternIndex = (encounterCount - 1) % pattern.size();
                    allowByPattern = (pattern[patternIndex] == 1);
                }
                bool isIgnoredPosition = (ignoredPositions.find(encounterCount) != ignoredPositions.end());
                if(isIgnoredPosition || n == ignoredValue || !allowByPattern){
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