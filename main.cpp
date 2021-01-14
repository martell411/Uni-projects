#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream read_file("/Users/marta/Documents/Module1/module1.txt");
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
    
    cout << "BEFORE" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
    
    int max_i = 0, max_j = 0;
    int min_i = 0, min_j =0;
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(m[i][j] > m[max_i][max_j])
            {
                max_i = i;
                max_j = j;
            }
            
            if(m[i][j] < m[min_i][min_j])
            {
                min_i = i;
                min_j = j;
            }
        }
    }
    
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            int tmp = m[min_i][min_j];
            m[min_i][min_j]= m[max_i][max_j];
            m[max_i][max_j] = tmp;
        }
    }
    
    cout << "AFTER" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
    
    
    
}
