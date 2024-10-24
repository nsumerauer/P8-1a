#include <iostream>//header for input output stream every one has one
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;//standard namespace


int countVowel(string str);


int main() {
    string str;
    while (true) {
        cout << "Enter a string or Q to quit:";
        getline(cin, str);
        if (str == "Q")
            break;
        cout << "Vowel count: " << countVowel(str) << endl;

    }
}


int countVowel(string str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    return count;
}