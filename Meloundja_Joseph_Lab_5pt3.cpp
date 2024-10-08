#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int i;
    int direct;
    int EW = 0;
    int NS = 0;

    //random number between 1 and 4 so each is 25% //probable,  //1 means North, 2 means South, 3 means East and 4 means West

    for (i = 0; i < 25; i++)
    {

    
    direct = rand() % 4 + 1;
    
    cout << direct << endl;

    if(direct == 1)
    {
        NS = NS + 1;
    }

    else if (direct == 2)
    {
        NS = NS - 1; 
    
    }

    else if (direct == 3)
    {
        EW = EW + 1;
    }

    else
    {
        EW = EW - 1;
    }

   
    

   
    }
    
    if (NS > 0)
    {
        cout << "you moved to the north:"<< NS << " times" << endl;
    }

    else if (NS < 0)
    {
         cout << "you moved to the south:"<< abs (NS) << " times" << endl;
    }

    if (EW > 0)
    {
        cout << "you moved to the east:"<< EW << " times" << endl;
    }

    else if (EW < 0)
    {
        cout << "you moved to the west:"<< abs (EW) << " times" << endl;
    }
}

