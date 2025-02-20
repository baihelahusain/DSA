#include<iostream>
using namespace std;

int main() {
    int total;
    cin >> total;

    int ans = 0;
    int rem = total;
    int step = 1; // To control which step to execute in the switch

    while (rem > 0) {
        switch (step) {
            case 1: // 100-rupee notes
                ans = rem / 100;
                cout << "100rs no. of notes required: " << ans << endl;
                rem = rem % 100;
                step++;
                break;

            case 2: // 50-rupee notes
                ans = rem / 50;
                cout << "50rs no. of notes required: " << ans << endl;
                rem = rem % 50;
                step++;
                break;

            case 3: // 20-rupee notes
                ans = rem / 20;
                cout << "20rs no. of notes required: " << ans << endl;
                rem = rem % 20;
                step++;
                break;

            case 4: // 1-rupee notes
                ans = rem / 1;
                cout << "1rs no. of notes required: " << ans << endl;
                rem = rem % 1;
                step++;
                break;

            default:
                exit; // Exit the loop
                
        }
    }

    return 0;
}

