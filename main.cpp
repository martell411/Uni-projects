#include <iostream>
#include <fstream>

using namespace std;

void ShowMatrix(int** a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    // Добуток елементів в тих рядках, які не містять відємних елементів
    int size = 10;
    int** mtxint = new int* [size];
    int  mult = 1;
    bool flag;
    do {
        cout << "Enter N:";
        cin >> size;
    } while (size <= 0);
    for (int i = 0; i < size; i++)
    {
        mtxint[i] = new int[size];
    }
    cout << "Enter array: " << endl;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cin >> mtxint[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < size; i++)
    {
        flag = true;
        for (int j = 0; j < size; j++)
        {
            if (mtxint[i][j] > 0)
            {
                mult *= mtxint[i][j];
            }
            else
            {
                flag = false;
            }

        }

        if (flag != false)
            cout << "Mult: " << mult << endl;
    }

    ShowMatrix(mtxint, size);


    for (int i = 0; i < size; i++)
    {
        delete[] mtxint[i];
    }
    delete[] mtxint;
    mtxint = NULL;
    

}


