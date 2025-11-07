#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
// Write your Student class here

class Student {
    private:
    vector<int> scores;

    public:
    void input() {
        int score;
        for (int i = 0; i < 5; i++) {
            cin >> score;
            scores.push_back(score);
        }
    }

    int calculateTotalScore() {
        int sum = 0;
        for (int s : scores) sum += s;
        return sum;
    }
};
int main() {
    int n;
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

  
    int kristen_score = s[0].calculateTotalScore();

   
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    cout << count;
    
    return 0;
}
