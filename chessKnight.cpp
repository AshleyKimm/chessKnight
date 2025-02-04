#include <iostream>
#include <string.h>
using namespace std;

int main();
int solution(string cell);

int main() {
    
    string pos{};
    while (true) {
        // Input: x position
        cout << "Enter the x position of knight: ";
        cin >> pos;

        // Prevents invalid input
        if (pos[0] >= 'a' && pos[0] <= 'h') break;
        else cout << "Please enter the valid character. ";
    }

    string posy{};
    while (true) {
        // Input: y position
        cout << "Enter the y position of knight: ";
        cin >> posy;

        // Prevents invalid input
        if (posy[0] >= '1' && posy[0] <= '8') break;
        else cout << "Please enter the valid character. ";
    }
    
    pos += posy;
    cout << "The knight can perform " << solution(pos) << " different moves from this position. ";
    return 0;
}



int solution(string cell) {
    int cnt{};
    for (int i{-2}; i <= 2; ++i) {
        if (i == 0) ++i;
        for (int j{-2}; j <= 2; ++j) {
            while (abs(i) == abs(j) || (j == 0)) ++j;
            if (j > 2) break;

            // If the position after move does not go beyond the chessboard, cnt increments
            if ((cell[0] + i >= 'a') && (cell[0] + i <= 'h') && (cell[1] + j >= '1') && (cell[1] + j <= '8')) ++cnt;
        }
    }
    return cnt;
}

