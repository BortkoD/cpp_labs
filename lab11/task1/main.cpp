#include "Distance.cpp"

int main() {
    Distance dist1, dist2, dist3, dist4;
    dist1.getdist();
    dist2.getdist();
    dist3 = dist1 + dist2;
    dist4 = dist3 - dist1;

    cout << "\ndist1 = " << dist1;
    cout << "dist2 = " << dist2; 
    cout << "dist3 = " << dist3;
    cout << "dist4 = " << dist4;
}