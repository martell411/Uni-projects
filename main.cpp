#include <iostream>
#include <string.h>

using namespace std;


void minMaxLengthWords(string input, string &minWord, string &maxWord)
{
    int si = 0, ei = 0; // змінні початку і кінця слова
    int min_length = (int)input.length(), min_start_index = 0, max_length = 0, max_start_index = 0;
  
    while (ei <= min_length) //
    {
        if (ei < min_length && input[ei] != ' ') //рахуємо довжину слова
            ei++;
          
        else
        {
            int curr_length = ei - si; //присвоємо довжину слова змінній яка відповідає за довжину в
          
            if (curr_length < min_length) //якщо довжина менша за мінімальну
            {
                min_length = curr_length; //то переприсвоюємо мінімальну довжину меншою
                min_start_index = si; //індекс початку мінімального слова
            }
              
            if (curr_length > max_length) //якщо довжина більша за максимальну
            {
                max_length = curr_length; //то переприсвоюєємо максимальну довжину більшою
                max_start_index = si; //індекс початку максимального слова
            }
            ei++; // переміщаємо змінну яка шукає слово на наступний символ
            si = ei; // переприсвоємо змінну яка відповідає за початковий символ слова
        }
    }
      
    minWord = input.substr(min_start_index, min_length); //вертає ту частину стрічки межі якої
    maxWord = input.substr(max_start_index, max_length); //вказані в параметрах
}


int main()
{
    string str, minWord, maxWord, temp;
    cout << "Enter string:";
    getline(cin, str);
    minMaxLengthWords(str, minWord, maxWord);
    
    
      
    cout << "Minimum length word: "
        << minWord << endl
        << "Maximum length word: "
        << maxWord << endl;
}
