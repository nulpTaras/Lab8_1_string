#include <iostream>
#include <string>

using namespace std;

int Count(const string& str, int i) {
    if (i >= str.length()) {
        return 0;
    }
    if (str[i] == ',') {
        return 1 + Count(str, i + 1);
    }
    return Count(str, i + 1);
}

string Change(const string& str, int i, string& result) {
    if (i >= str.length()) {
        return result;
    }
    if (str[i] == ',') {
        result += "**";
    } else {
        result += str[i];
    }
    return Change(str, i + 1, result);
}

