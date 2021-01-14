#include <iostream>
#include <string.h>

using namespace std;

string StringWithOneSpace(string s)
{
  for (int i = 0; i < s.length(); i++)
    if (s[i] == ' ' && s[i + 1] == ' ')
    {
      s.erase(i, 1);
      i = (i - 1);
    }
  if (s[0] == ' ')
      s.erase(0, 1);
      
  return s;
}
string FindThreeWords(string s)
{
  int i = 0;
  string singleWord = "";
  for (int k = 0; k < 3; k++)
  {
    do
    {
      singleWord += s[i];
      i++;
    } while (s[i] != ' ');
    i += 1;
  }
    
  return singleWord;
}

int main()
{
  string str;
  cout << "Enter string: ";
  getline(cin, str);
  string three = FindThreeWords(StringWithOneSpace(str));
  cout << three.length();
}
