#include <iostream>
using namespace std;

int main()
{
    int score[6] = {92, 85, 88, 77, 68, 55};
    int temp;
    
    for (int i=1; i<6; i++) {
        for (int j=0; j < 6-i ;j++) {
            if (score[j]>score[j+1] ) {
                temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
            
            }
        }
        
    }
    cout << "成績遞增" << endl;
        for (int i=0; i<6; i++) {
            cout << score[i] << " ";
            
        }
        return 0;
}
    