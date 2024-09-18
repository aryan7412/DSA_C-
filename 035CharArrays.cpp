#include <iostream>
using namespace std;

void reverse(char name[20], int n) {
    int s = 0;
    int e = n - 1;
    while (s < e) {
        swap(name[s++], name[e--]);
    }
}

char toLower(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isAlphaNumeric(char ch) {
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'));
}

bool checkPalindrome(char name[20], int len) {
    int start = 0;
    int end = len - 1;
    while (start < end) {
        while (start < end && !isAlphaNumeric(name[start])) {
            start++;
        }
        while (start < end && !isAlphaNumeric(name[end])) {
            end--;
        }
        if (toLower(name[start]) != toLower(name[end])) {
            return false;
        } else {
            start++;
            end--;
        }
    }
    return true;
}

int getLength(char name[20]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char name[20];
    cout << "Enter your name:" << endl;
    cin >> name;
    cout << "Your Name is: " << name << endl;

    int len = getLength(name);
    cout << "Total elements: " << len << endl;

    bool p = checkPalindrome(name, len);
    if (p == false) {
        cout << "Not a palindrome" << endl;
    } else {
        cout << "Is a Palindrome" << endl;
    }

    reverse(name, len);
    cout << "Reversed Name is: " << name << endl;

    return 0;
}
