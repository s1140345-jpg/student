#include <iostream>
using namespace std;

int main() {
    string name[5] = {"Amy", "Ben", "Cindy", "David", "Eva"};
    int score[5][3] = {
        {80, 90, 85},
        {70, 75, 78},
        {88, 92, 95},
        {60, 65, 70},
        {90, 93, 89}
    };

    // 計算每位學生的總成績
    for (int i = 0; i < 5; i++) {
        int total_score = 0;
        for (int j = 0; j < 3; j++) {
            total_score += score[i][j];
        }
        cout << "學生: " << name[i] << " - 總成績: " << total_score << endl;
    }

    return 0;
}