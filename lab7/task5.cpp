#include <iostream>
#include <string>
#include <tuple>
#include <vector>
using namespace std;

using Tuple = tuple<string, int, double>;

void printTupleOfThree(Tuple t)
{
    cout << "("
    << std::get<0>(t) << ", "
    << std::get<1>(t) << ", "
    << std::get<2>(t) << ")" << endl;
}

Tuple funtup(string s, int a, double d)
{
    s.append("!");
    return make_tuple(s, a, d*10);
}

Tuple changeTuple (Tuple t) 
{
    string s = get<0>(t) + " meow";
    int a = get<1>(t) + 100;
    double d = get<2>(t) / 2;
    return {s, a, d};
}

int main()
{
    vector<string> v1{ "one", "two", "three", "four", "five", "six" };
    vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
    vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

    auto t0 = make_tuple(v1[0], v2[0], v3[0]);
    auto t1 = funtup(v1[1], v2[1], v3[1]);

    printTupleOfThree(t0);
    printTupleOfThree(t1);
    printTupleOfThree(changeTuple(t1));

    
    return 0;
}