#include <iostream>//header for input output stream every one has one
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;//standard namespace


int countCharacter(string str);


int main() {
    string str = "abcd";
    cout << countCharacter(str);
}


int countCharacter(string str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}