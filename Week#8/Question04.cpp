#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string line, target, word;
    int count = 0;
    
    cout << "Enter the main string...\n";
    getline(cin, line);
    cout << "Enter the word to be replaced...\n";
    cin >> word;
    
    stringstream ss(line);
    while (ss >> target)
        if (word == target)
            count++;
    if(count!=0)    
        cout << "\nThe word "<<word<<" comes " << count <<" times";
    else
        cout<<"\nThe word "<<word<<" does not exist";
    return 0;
}
