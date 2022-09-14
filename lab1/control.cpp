#include <iostream>
using namespace std;

int main() 
{
    double coord[5][2];
    double square = 0; 

    // obtaining data
    cout << "Please, enter vertex coordinates in format x1 y1 x2 y2 ..." << endl;
    for (int i = 0; i < 5; i++) 
    {
        cin >> coord[i][0] >> coord[i][1];
    }

    //calculating pentagon's square 
    for (int i = 0; i < 5; i++) 
    {
        square += coord[i][0] * coord[ (i+1) < 5 ? i+1 : 0][1] - coord[ (i+1) < 5 ? i+1 : 0][0]*coord[i][1];
    }
    square = abs(square) / 2;

    //results output
    cout << "The square of ​​the pentagon is "<< square << endl;

    return 0;
}
