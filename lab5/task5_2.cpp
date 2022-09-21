#include <iostream>
#include <vector>
using namespace std;

int main() {

    srand(time(NULL));
    int a, b, c;
    int k = 0;
    const int n = 10;
    int mas[n];
    vector<int> true_ans;  
    vector<int> false_ans; 

    for(int i=0; i < n; i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";

        cin >> c;
        mas[i] = c;
        if (a*b != c)
        {
            k++;
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
            false_ans.push_back(c);
        }
        else true_ans.push_back(c);
    }

    cout << "\nAll: ";
    for (int i=0; i<n; i++)
    {
        cout << mas[i] << " ";
    }
    cout << "\nGood: ";
    for (int i = 0; i < true_ans.size(); i++)
    {
        cout << true_ans[i] << " ";
    }
    cout << "\nBad: ";
    for (int i = 0; i < false_ans.size(); i++)
    {
        cout << false_ans[i] << " ";
    }

    return 0;
}