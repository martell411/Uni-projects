#include <iostream>

using namespace std;

int main()
{
    int last = 0, next = 1;
    long sum = 1;
    for(; next < 1000; next += last)
    {
        last = next - last;
        cout << next << "\t" << endl;
        sum += next;
    }
    cout << sum;
    return 0;
}
