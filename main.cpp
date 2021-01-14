#include <iostream>
#include <fstream>

using namespace std;



int main()
{
    ifstream read_file("/Users/marta/Documents/Task2V4/task2.txt");
    int rows, cols;
    read_file >> rows;
    read_file >> cols;
    int** m = new int*[rows];
    for(int i = 0; i < rows; i++)
    {
        m[i] = new int[cols];
    }
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            read_file >> m[i][j];
        }
    }
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
    
    
    int t, t1, count = 0, tmp;
    for(int i = 0; i < rows; i++)
    {
      for(int j = 0; j < cols; j++)
    {
            tmp = m[i][j];
            m[i][j] = 0;
        
        for(int k = 0; k < rows; k++)
        {
           for(int f = 0; f < cols; f++)
           {
              if(tmp == m[k][f])
              {
                 t = m[k][f];
              }
              else
                count++;
           }
     
           if(t1 > t)
             t = t1;
     }
     
        t1 = t;
        m[i][j] = tmp;
     
      }
    }
    double kof;
    kof = pow((double)rows, 4);
     
    if(count == kof)
      cout << "No such elements";
    else
      cout << "Max: " << t;
}
     
    
