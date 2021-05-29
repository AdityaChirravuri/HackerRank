#include <bits/stdc++.h>
using namespace std;

int main() {
    /*int d, month, year;
    int due_d, due_month, due_year;
    int hackos = 0;
    cin >> d >> month >> year;
    cin >> due_d >> due_month >> due_year;
    
    if(d <= due_year){
        if(due_month >= month){
            if(due_d >= d)hackos += 0;
            else hackos += (15*(d-due_d));
        }else {
            hackos += (500*(month-due_month));
            if(due_d >= d)hackos += 0;
            else hackos += (15*(d-due_d));
        }
    }else hackos = 10000;
    
    cout << hackos;*/
    int eday, emon, eyear;
    int aday, amon, ayear;

    cin >> aday >> amon >> ayear;
    cin >> eday >> emon >> eyear;

    int fine = 0;

    int dyear = ayear - eyear;
    int dmon = amon - emon;
    int dday = aday - eday;

    if (dyear > 0) {
        fine = 10000;
    }
    else if (dmon > 0 && dyear == 0) {
        fine = 500 * dmon;
    }
    else if (dday > 0 && dmon == 0) {
        fine = 15 * dday;
    }

    cout << fine << endl;
    return 0;
}
