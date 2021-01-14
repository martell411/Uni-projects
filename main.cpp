#include <iostream>
#include <string.h>

using namespace std;

//Дано послідовність слів, відокремлених пропусками, в кінці крапка. Видалити останню букву з кожного слова.
void DeleteLastLitter()
{
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str.erase(i - 1, 1);
        }

    }

    cout << str;
}




//Виводить символи а- а також їх коди в десятковому і шістнадцятковому вигляді
void SymbolsAndTheirCode()
{
    char s;
    int n;
    for(s = 'a', n = 97; s <= 'z'&& n <= 122; s++, n++)
    {
        cout << "Symbol: " << s << "\t"
        << "10: " << n << endl;
        
    }
    
    for(s = 'a', n = 97; s <= 'z'&& n <= 122; s++, n++)
    {
        cout << "16: " << (int)s << hex << "\t" << endl;
    }
}


void SymetricWords()
{
    string str;
    bool check = true;
    getline(cin, str);
    for (int i = 0; i < str.length()/2; i++)
    {
        if (str[i] != str[str.length()-i-1])
        {
            check = false;
         }
    }
    if (check)
       cout<< str << endl;
    
    
}
int main()
{
    //SymetricWords();
    SymbolsAndTheirCode();
}
