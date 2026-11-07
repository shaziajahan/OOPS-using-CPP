#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main() {
    ifstream in("T1.txt");
    ofstream out("output.txt");
    char ch;
    if (!in || !out) {
        cout << "Error opening file!";
        return 1;
    }
    while (in.get(ch)) {
        if (!isspace((unsigned char)ch)) {
            out.put(ch);
        }
    }
    in.close();
    out.close();
    cout << "Whitespace removed successfully!";
    return 0;
}
