#include <iostream>

using namespace std;

int main()
{
    int count, num, q1 = -1, sum = 0;
    bool flag = 0;
    cout << "Enter amount of numbers:" << "\t";
    cin >> count;
    if(count <= 0)
        cout << "Error !";
    else{
        for(int i = 0; i < count; i++)
        {
            cin >> num;
            if(num == 0)
                flag = 1;
            
            if(flag == 1)
            {
                q1++;
                sum += num;
            }
        }
        cout << "Result: " << sum / q1 << endl;
    }
}
