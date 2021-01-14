//обернути матрицю на 180 градусів

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
  srand(time(0));
    
  int n;
  cout << "Enter n: ";
  cin >> n;
  cout << "Original matrix:" << endl;
  int** matr = new int* [n];
  for (int i = 0; i < n; i++)
    matr[i] = new int[n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      matr[i][j] = rand() % 17;

  for (int i = 0; i < n; i++)
  {
    cout << endl;
    for (int j = 0; j < n; j++)
      cout << matr[i][j] << " ";
  }
  cout << "180 degrees matrix:" << endl;
  int** matr1 = new int* [n];
  for (int i = 0; i < n; i++)
    matr1[i] = new int[n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      matr1[i][j] = matr[n - 1 - i][n - 1 - j];
  for (int i = 0; i < n; i++)
  {
    cout << endl;
    for (int j = 0; j < n; j++)
      cout << matr1[i][j] << " ";
  }
  return 0;
  system("pause");
}
