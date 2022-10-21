#include <iostream>
#include "student.h"
using namespace std;

int main()
{
    human harry = human ("Potter", "Harry", "James");
    cout << harry.get_full_name() << endl;

    student james = student ("Potter", "James", "Sirius", {4, 5, 3});
    cout << james.get_full_name() << endl;
    cout << james.get_average_score() << endl;
    return 0;
}