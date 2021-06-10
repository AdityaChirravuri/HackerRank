#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops

struct Workshops{
    int start__time;
    int duration_;
    int end__time;
};

struct Available_Workshops{
    int n;
    vector<Workshops>arr;
};

Available_Workshops* initialize(int start_time[], int duration[], int n_){
    Available_Workshops* a = new Available_Workshops;
    a->n = n_;
        
    for(int i=0; i<n_; i++){
        Workshops w;
        w.start__time = start_time[i];
        w.duration_ = duration[i];
        w.end__time = w.duration_ + w.start__time;
        a->arr.push_back(w);
    }
        
        return a;
}

bool compare_workshops(Workshops& w1, Workshops& w2)
{
    return w1.end__time - w2.end__time > 0;
}
    
int CalculateMaxWorkshops(Available_Workshops* ptr) {
    vector<Workshops> workshops = ptr->arr;
    sort(workshops.begin(), workshops.end(), compare_workshops);

    int total{0};
    while (workshops.size()) {
        //total++;
        int end_time = workshops.back().end__time;
        bool overlap{true};
        while (workshops.size() && overlap) {
            workshops.pop_back();
            if (workshops.back().start__time >= end_time) {
                overlap = false;
            }
        }
        total++;
    }
    
    return total;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
