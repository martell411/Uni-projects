#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

struct Train {
    string arrival_place;
    int number;
    string departure_time;
};



int main()
{
    Train *trains = new Train[5];
    ifstream read_file("/Users/marta/Documents/Module3/module3.txt");

    if (!read_file)
    {
      cout << "error";
      return 1;
    }
     
    if(read_file.is_open())
    {
        for (int i = 0; i < 5; i++)
        {
            read_file >> trains[i].arrival_place >> trains[i].number >> trains[i].departure_time;
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << "arrival place:" << trains[i].arrival_place;
        cout << "number:" << trains[i].number;
        cout << "departure time" << trains[i].departure_time;
    }
    
    
    delete[] trains;
    
    read_file.close();
}
