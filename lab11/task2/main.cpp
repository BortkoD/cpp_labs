#include "Distance.cpp"

int main() {

    Distance dist1 = 2.35F;
    cout << dist1 << endl;
    Distance dist2 = Distance (3, 5);
    float mtrs;
    mtrs = static_cast<float>(dist1);
    cout << mtrs << endl;
    mtrs = dist2;
    cout << mtrs << endl;

    
    return 0;
}