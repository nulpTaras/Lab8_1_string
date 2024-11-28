#include "functions.cpp"

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    int commaCount = Count(str, 0);
    cout << "Counter = " << commaCount << endl;

    string result;
    Change(str, 0, result);

    cout << "Result = " << result << endl;

    return 0;
}
