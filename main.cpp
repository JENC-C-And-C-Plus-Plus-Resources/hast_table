#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> msg {"Congrats", "on", "running", "C++ code"};

    for (const string& word: msg){
        cout << word << " ";
    }
    cout << endl;
    return 0;
}