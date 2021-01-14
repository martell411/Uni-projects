#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;


void Task1()
{
    int n;
    float r= 0, min = 0;
    do
    {
        cout << "n: ";
        cin >> n;
    } while(n < 1);
     
    if(pow(2, r) > n)
    {
        if(r < min)
        {
          r--;
          min = r;
        }
        else if(r == min)
            min = r;
    }
    else  if(pow(2, r) < n)
    {
        do{
        r++;
        min = r;
        }while(pow(2, r) < n);
        
    }
    cout << min;
}


int main()
{
    string str, second_word, word, new_str;
    int count = 0;
    getline(cin, str);
    int i = 0;
      while (str[i] != ' ')
        i++;
      i++;
      while (str[i] != ' ') {
        second_word += str[i];
        i++;
      }
      int sum = 0;
    for (int i = 0; i < str.length(); i++) {
       if ((str[i] != ',') && (str[i] != '.') && (str[i] != ' '))
       {
         word += str[i];
       }
       else {
         if (word == second_word)
           sum++;
       //  if ((word[0] != 'j') && (word[word.length()-1] != 'f'))
        //   new_str = new_str + word + str[i];
         //if ((word[0] == 'j') || (word[word.length() - 1] == 'f'))
           //count++;
        // word.clear();
       }
       
     }cout<<new_str;
     cout << count << endl;
     cout <<sum <<endl;
    
}

    



