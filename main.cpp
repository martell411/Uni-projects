#include <iostream>
#include <string.h>

using namespace std;

//Задано три цілі числа. Визначити серед них максимальне і добуток двох іншим чисел.
void F1()
{
    int f =0, s =0, t= 0;
    cout << "f:";
    cin >> f;
    cout << "s:";
    cin >> s;
    cout << "t:";
    cin >> t;
    if(f > s && f > t)
    {
        cout << "max:" << f << "mult:" << s*t;
    }
    else if(s > f && s > t)
    {
        cout << "max:" << s << "mult:" << f*t;
    }
    else cout << "max:" << t << "mult:" << f*s;
}
 //Дано послідовність слів, відокремлених комами. Надкрукувати слово, складене з останніх літер усіх слів.
void F2()
{
    string s, new_string;
    char c;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ',')
        {
            c = s[i- 1];
            new_string += c;
        }
    }
    cout << new_string;
}


int sum(int* s, int j, int size)
{
  int result = 0;
  for (int i = j; i < size; i++)
  {
    result += s[i];
  }
  return result;
}

//11.3
int main()
{
  srand(time(0));
    
  int n, m;
  cout << "Enter n: ";
  cin >> n;
  cout << "Enter m: ";
  cin >> m;
  int** matr = new int* [n];
  for (int i = 0; i < n; i++)
    matr[i] = new int[m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      matr[i][j] = rand() % 11;
  cout << "First matrix:" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << endl;
    for (int j = 0; j < m; j++)
      cout << matr[i][j] << " ";
  }
  int** matrb = new int* [n];
  for (int i = 0; i < n; i++)
    matrb[i] = new int[m];
  cout << endl;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
      matrb[i][j] = sum(matr[i], j, m);
    }
  cout << "Second matrix:" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << endl;
    for (int j = 0; j < m; j++)
      cout << matrb[i][j] << " ";
  }

    
}
