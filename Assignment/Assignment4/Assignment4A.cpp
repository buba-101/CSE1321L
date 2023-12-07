#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double initial_speed_MPH, deceleration_MPH, time_interval_seconds;

    // Get user input
    cout << "[Stopping Time]" << endl;
    cout << "How fast are you going (miles/hour)? ";
    cin >> initial_speed_MPH;
    cout << "How quickly can you decelerate (miles)? ";
    cin >> deceleration_MPH;
    cout << "How often do you want to see updates (in seconds)? ";
    cin >> time_interval_seconds;

    // Calculate initial values
    double current_speed_MPH = initial_speed_MPH;
    double current_speed_FPS = current_speed_MPH * 1.46667; // Convert MPH to feet per second
    double distance_feet = 0.0;
    double time_seconds = 0.0;

    cout << "You are going " << initial_speed_MPH << " MPH when you slam on the brakes!" << endl;

    // Loop to calculate and display speed, distance, and time
    while (current_speed_MPH >= 0) {
        if (time_seconds > 0) {
            cout << "At " << time_seconds << " seconds, you have traveled "
                << distance_feet << " feet and are now moving at "
                << current_speed_MPH << " MPH." << endl;
        }

        // Update values for the next iteration
        time_seconds += time_interval_seconds;
        distance_feet += (current_speed_FPS * time_interval_seconds) - (0.5 * (deceleration_MPH * 1.46667) * time_interval_seconds * time_interval_seconds);
        current_speed_MPH -= deceleration_MPH * time_interval_seconds;

        // Ensure current_speed_MPH doesn't go negative
        if (current_speed_MPH < 0) {
            current_speed_MPH = 0;
        }
        current_speed_FPS = current_speed_MPH * 1.46667; // Convert updated MPH to feet per second

        if (current_speed_MPH == 0)
        {
          cout << "At " << time_seconds << " seconds, you have traveled "
                << distance_feet << " feet and are now moving at "
                << current_speed_MPH << " MPH." << endl;
          break;
        }
    }

    cout << "You took " << time_seconds << " seconds to stop and traveled " << distance_feet << " feet during that time!" << endl;

    return 0;
}
