#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // player's data
    int x, y, dist, min_score = 30, max_att = 15;
    int total = 0, shots = 0;

    // target's data
    int rad[] = {2, 4, 6};
    int points[] = {10, 5, 1};
    int target_x = rand() % 24; 
    int target_y = rand() % 24;

    int obstacle, wind_x, wind_y;

    cout << "Let's start! We have a field 30x30 with coordinates from 0 to 29" << endl;

    // shooting session
    while (total < min_score && shots < max_att)
    {
        cout << "Enter new coordinates: ";
        cin >> x >> y;
        
        obstacle = rand() % 100;
        if (obstacle > 70) {
            x = x + pow(-1, obstacle) * (rand() % 30);
            y = y + pow(-1, obstacle) * (rand() % 30);

            cout << "Oops! The wind blew and changed the direction of your shot" << endl;
        }

        dist = (x-target_x) * (x-target_x) + (y-target_y) * (y-target_y); // distance from center of the target to the shot point

        if (dist <= rad[0] * rad[0]) 
        {
            total += points[0];
            cout << "Excellent!" << endl;
        }
        else if (dist <= rad[1] * rad[1]) 
        {
            total += points[1];
            cout << "Great!" << endl;
        }
        else if (dist <= rad[2] * rad[2]) 
        {
            total += points[2];
            cout << "Good!" << endl;
        }
        else {
            cout << "Almost hit!" << endl;
        }

        shots++;
    }

    // results
    cout << "\nThat's it. The center of the target was at (" << target_x << ", " << target_y << ")" << endl;

    if (shots <= 5) cout << "It takes only " << shots << " shots. You are a sniper!" << endl;
    else if (shots <= 9) cout << "It takes " << shots << " shots. You are a good shooter!" << endl;
    else cout << "You did " << shots << " shots. Seems like you are a beginner!" << endl; 

    return 0;
}