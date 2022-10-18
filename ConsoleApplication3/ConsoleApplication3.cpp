#include <iostream>

using namespace std;

void f1(char* s, size_t i)
{
	size_t length_string = strlen(s);

	for (; i < length_string; ++i)
		s[i] = s[i + 1];
}
void f2(char* arr, char ch)
{
    const char* old = arr;
    while (*old)
    {
        if (*old != ch) {
            *arr = *old;
            ++arr;
        }
        ++old;
    }
    *arr = '\0';
}
void f3(string& S, char ch, const size_t pos) {

    if (pos >= S.size() + 1) return;

    S += '_';
    for (size_t i = S.length(); i > pos; i--) {
        S[i] = S[i - 1];
    }
    S[pos] = ch;
}

int main()
{
    /*string S = "HELLO";
    char letter;
    size_t position = 0;

    cout << "S = \"" << S << "\"\n";
    cin >> letter;
    cout << "[0;" << S.length() << "]: ";
    cin >> position;

    insert(S, letter, position);
    cout << "S = " << S << '\n';*/

    /*f5string line;
    int count = 0;
    char searchKey = 'a';
    cout << "enter string: ";
    getline(cin, line);
    for (unsigned int i = 0; i < line.length(); i++)
        if (line[i] == searchKey)
            count++;
    cout << "string has " << count << " symbol(s) " << """ << searchKey << ""!" << endl;*/

}