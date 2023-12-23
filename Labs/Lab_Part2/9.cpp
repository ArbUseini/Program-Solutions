#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int location[5][2];
    for (int i = 0; i < 5; i++){
        cin >> location[i][0] >> location[i][1];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i == location[0][0] && j == location[0][1]){
                cout << "i ";
            }
            else if (i == location[1][0] && j == location[1][1]){
                cout << "o ";
            }
            else if (i == location[2][0] && j == location[2][1]){
                cout << "] ";
            }
            else if (i == location[3][0] && j == location[3][1]){
                cout << "] ";
            }
            else{
                cout << "- ";
            }
        }
        cout << endl;
    }
    int ball_i(location[1][0] + location[4][0]), ball_j(location[1][1] + location[4][1]);
    if (ball_i == location[2][0]){
        if (ball_j == location[2][1]){
            cout << "GOAL!";
            return 0;
        }
    }
    if (ball_i == location[3][0]){
        if (ball_j == location[3][1]){
            cout << "GOAL!";
            return 0;
        }
    }
    if (ball_i < n && ball_j < m){ //my brain hurts I know I can do this in a better way
        cout << "Novata pozicija na topkata e (" << ball_i << ", " << ball_j << ")" << endl;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (i == location[0][0] && j == location[0][1]){
                    cout << "i ";
                }
                else if (i == ball_i && j == ball_j){
                    cout << "o ";
                }
                else if (i == location[2][0] && j == location[2][1]){
                    cout << "] ";
                }
                else if (i == location[3][0] && j == location[3][1]){
                    cout << "] ";
                }
                else{
                    cout << "- ";
                }
            }
            cout << endl;
        }
        return 0;
    }
    cout << "OUT!";
    return 0;
}