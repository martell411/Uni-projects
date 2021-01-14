#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int size = 0, maxSum= 0;
    int** matrix = new int*[size];
    
    ifstream file_to_read("/Users/marta/Documents/Matrix2/Matrix2/matrix2.txt");
    
    if(!file_to_read.is_open())
    {
        cout << "File couldn't be open";
        return -1;
    }
     file_to_read >> size;
        
    for(int i = 0; i < size; i++)
        matrix[i] = new int[size];
    
    for(int i =0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            file_to_read >> matrix[i][j];
        }
    }
    
    for (int i = 0, k = 0, y = 0; k < size + size; i++, k++)
      {
          int currSum = 0;
          if (k < size - 1)
          {
              for (int j = y; j >= 0; j--)
              {
                  currSum += matrix[i++][j];
              }
              y++;
              i = -1;
          }
          else if (k >= size)
          {
              for (int j = size - 1, x = i; j >= i; j--)
              {
                  currSum += matrix[x++][j];
              }
          }
          if (currSum > maxSum) { maxSum = currSum; }
      }
      for (int i = 0; i < size; i++)
      {
          for (int j = 0; j < size; j++)
          {
              cout << matrix[i][j] << "\t";
          }
          cout << endl;
      }
      cout << "Max sum: " << maxSum;

      for (int i = 0; i < size; i++)
      {
          delete[] matrix[i];
      }
      
      delete[] matrix;
      matrix = NULL;
         
         
    
        
}
