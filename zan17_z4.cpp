#include <iostream>
using namespace std;

double trip_time(double s, double v){
    return s/v;
}

int main() {
    
    int count = 1;
    double dist, speed, plan_time, actual_time;
    
    for(int i=1; i<=count; i++){
        cout << "Enter distance[km], speed[km/h], and planned time[k] for trip number: " << i << ": ";
        cin >>  dist;
        cin >> speed;
        cin >> plan_time;
        cout << "distance= " << dist << " spped= " << speed << " planned time= " << plan_time << "\n";
        actual_time= trip_time(dist, speed);
        cout << "actual time: "<< actual_time << " hours\n";
        if(actual_time <= plan_time){
            cout << "on time!";
        } else {
            cout << "delayed!";
        }
    }

    return 0;
}
