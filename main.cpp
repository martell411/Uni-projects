#include <iostream>
#include <string.h>

using namespace std;

bool jExist(string str) {
  for (int i = 0; i < str.length(); i++) {
    if (str[str.length() - 1] == 'j') {
      return true;
    }
  }
  return false;
}

bool fExist(string str) {
  for (int i = 0; i < str.length(); i++) {
    if (str[str.length() - 1] == 'f') {
      return true;
    }
  }
  return false;
}

bool BExist(string str) {
  for (int i = 0; i < str.length(); i++) {
    if (str[0] == 'b') {
      return true;
    }
  }
  return false;
}

bool DExist(string str) {
  for (int i = 0; i < str.length(); i++) {
    if (str[0] == 'd') {
      return true;
    }
  }
  return false;
}

void addWordToNewStr(string& newStr, string word, int& amountWordsWithJ, int& amountWordsWithF) {
  bool ifFExist = fExist(word);
  bool ifJExist = jExist(word);
  if (ifFExist) {
    amountWordsWithF++;
  }
  if (ifJExist) {
    amountWordsWithJ++;
  }
  if (!ifFExist && !ifJExist) {
    newStr = newStr + word + ' ';
  }
}

void addWordToNewStr1(string& newStr, string word, int& amountWordsWithB, int& amountWordsWithD) {
  bool ifBExist = BExist(word);
  bool ifDExist = DExist(word);
  if (ifBExist) {
    amountWordsWithB++;
  }
  if (ifDExist) {
    amountWordsWithD++;
  }
  if (!ifBExist && !ifDExist) {
    newStr = newStr + word + ' ';
  }
}


void Task1()
{
    int n=0, k=0, fact = 1, res = 1;
    do{
        cout << "n: ";
        cin >> n;
        cout << "k: ";
        cin >> k;
    }while(n < 0 && k < 0);
    
    int i =0;
    do{
        res = res * (n - i);
        i++;
    }while(i < k);
    
    for(int i = 1; i <= k; i++)
    {
        fact = fact * i;
    }
    
    cout <<"res: " <<  res/fact;
}


void Task3()
{
    int count = 0;
    string str;
    getline(cin, str);
    for(int i =0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {
            int tmp = i - 1;
            if(str[tmp] == 'j' || str[tmp] == 'f')
            {
                do
                {
                    str.erase(tmp, 1);
                    tmp--;
                    
                } while (str[tmp] != ' ');
                count++;
            }
        }
    }
    
    if(str[str.length()-1] == 'j' || str[str.length()-1] == 'f')
    {
        int tmp = str.length()-1;
        while(str[tmp] != ' ')
        {
            str.erase(tmp, 1);
            tmp--;
        }
        count++;
    }

    
    cout << "New string: " << str << " " << "Amount: " << count;
    
}


int main()
{
    Task3();
    
    
    
    
  string str;
  string word;
  string newStr;
  int amountWordsWithJ = 0;
  int amountWordsWithF = 0;
  int amountWordsWithB = 0;
  int amountWordsWithD = 0;
  getline(cin, str);
  cout << jExist(str);
  for (int i = 0; i < str.length(); i++) {
    if (str[i] != ' ')  {
      word += str[i];
    }
    else {
      addWordToNewStr1(newStr, word, amountWordsWithB, amountWordsWithD);
      word = "";
    }
    if (i == str.length() - 1) {
      addWordToNewStr1(newStr, word, amountWordsWithB, amountWordsWithD);
    }
  }
  cout << endl << "Amout words with 'B' = " << amountWordsWithB;
  cout << endl << "Amout words with 'D' = " << amountWordsWithD;
  cout << endl << "New STR: " << newStr;
}
