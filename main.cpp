#include <iostream>

using namespace std;

bool checkPolindrom(string word)
{
    int len = word.length();
    for(int i = 0; i < len / 2; ++i)
    {
        if(word[i] != word[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

string toLowercase(string str){
    string newStr;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] <= 'Z' && str[i] >= 'A')
        {
          newStr += (char) (str[i] - ('Z' - 'z'));
        } else
        {
            newStr += str[i];
        }
    }
    return newStr;
}

string deleteUppercaseLetters(string str){
    string newStr;
    for (int i = 0; i < str.length(); ++i) {
        if (!(str[i] <= 'Z' && str[i] >= 'A'))
        {
            newStr += str[i];
        }
    }
    return newStr;
}

int main()
{
    string str;
    cout << "Enter the word: ";
    cin >> str;
    string newStr = toLowercase(str);
    if(checkPolindrom(newStr))
    {
        cout << "Word is polindrom.";
    }
    else
    {
        newStr = deleteUppercaseLetters(str);
        cout << newStr;
    }
    return 0;
}
