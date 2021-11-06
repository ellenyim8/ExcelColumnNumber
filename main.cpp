#include <iostream>
using namespace std;

int getColumnNumber(string columnString);

int main() 
{
    //cout << "testing..." << endl; 
    cout << getColumnNumber("ABC") << endl;
    cout << "Expected: 731." << endl; 

    cout << getColumnNumber("DEF") << endl; 
    cout << "Expected: 2840. " << endl; 

    cout << getColumnNumber("AA") << endl;
    cout << "Expected: 27." << endl; 

    cout << getColumnNumber("CC") << endl; 
    cout << "Expected: 81." << endl; 

    cout << getColumnNumber("XFE") << endl; 
    cout << "Expected: 16385." << endl; 

    return 0;
}

int getColumnNumber(string columnString)
{
    int columnNumber = 0;

    for (auto ch : columnString) {
        columnNumber = columnNumber * 26 + (ch - 'A' + 1);
    }

    return columnNumber;
}

