#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;

void Task1()
{
    int m, k= 0, max = 0;
    do
    {
        cout << "m: ";
        cin >> m;
    } while(m <= 1);
     
    
    do
    {
        if (k > max)
        {
            max = k;
            k++;
        }
        if(k < max || k == max) {
               k++;
           }
    }while(pow(4, k) < m);
    cout << max;
}

void Task3()
{
    int count = 0;
    string str;
    getline(cin, str);
    
    if(str[0] == 'b' || str[0] == 'd')
    {
        int tmp = 0;
        while(str[tmp] != ' ')
        {
           str.erase(0, 1);
           tmp++;
        }
        count++;
    }
    for(int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
           if(str[i + 1] == 'b' || str[i + 1] == 'd')
           {
               str.erase(i + 1, 1);
               count++;
           }
        }
    }
    
    cout <<"New string: " << str << " " << "Amount: " << count;
}



int main()
{
    Task1();
    Task3();
    
}
