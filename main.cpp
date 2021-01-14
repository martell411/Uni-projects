#include <iostream>
#include <string.h>

using namespace std;


void F1()
{
    int n, max=0,min=10;
    cout << "Enter number: " << endl;
    cin >> n;
    while (n > 0)
    {
      if (n % 10 > max)
        max = n % 10;
      else if (n % 10 < min)
        min = n % 10;
      n /= 10;
      
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Max multiplied by min:" << max * min << endl;
}

int main()
{
    string str;
    int sum=0, pos=0, space=0,len = 0;
    cout << "Enter string" << endl;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {
            space++;
            
            if(space == 3 || str[i] == '\0')
            len = i + 1;
            
        }
    }
    
    for(int i = pos; i < len; i++)
    {
        if(str[i] != ' ')
          {
              space++;
              sum++;
              pos = i+1;
          }
       
     }
    
   
    cout << sum;
}
