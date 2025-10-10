#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string S, T;
    
    cout << "Enter the main string (S)...\n";
    getline(cin, S);
    
    cout << "Enter the substring to find (T)...\n";
    getline(cin, T);    

    size_t position = S.find(T);
    
    if (position != string::npos) {
        cout << "String '" << T << "' found at position: " << position << endl;
    } else {
        cout << "String '" << T << "' not found" << endl;
    }
    
    return 0;
}
