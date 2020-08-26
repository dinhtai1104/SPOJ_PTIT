#include <bits/stdc++.h>
#include <string>
using namespace std;
 
struct person {
    string name;
    int day, month, year;
    person() {
        name = "";
        day = month = year = 0;
    }
};
 
person findOldest(vector<person> a) {
    person tmp;
    for(person z: a) {
        if(tmp.year == 0) {
            tmp = z;
        }
        else {
            if (tmp.year < z.year || (tmp.year == z.year && tmp.month < z.month) ||
            (tmp.year == z.year && tmp.month == z.month && tmp.day < tmp.day)) {
                tmp = z;
            }
        }
    }
    return tmp;
}
 
person findEldest(vector<person> a) {
    person tmp;
    for(person z: a) {
        if(tmp.year == 0) {
            tmp = z;
        }
        else {
            if (tmp.year > z.year || (tmp.year == z.year && tmp.month > z.month) ||
            (tmp.year == z.year && tmp.month == z.month && tmp.day > tmp.day)) {
                tmp = z;
            }
        }
    }
    return tmp;
}
 
 
int main() {
    int n;
    cin>>n;
    vector<person> a(n);
    for(person &z: a) {
        cin>>z.name>>z.day>>z.month>>z.year;
    }
    person oldest = findOldest(a), eldest = findEldest(a);
    cout << oldest.name << endl << eldest.name;
} 
