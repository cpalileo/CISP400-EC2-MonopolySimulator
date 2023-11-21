#include <iostream>
using namespace std;

class Dice {
private:
    int Roll1;
    int Roll2;
    int TotalRoll;

public:
    Dice() {
        srand(static_cast<unsigned int>(time(0)));
    
        Roll1 = 0;
        Roll2 = 0;
        TotalRoll = 0;
    }

    int RollDie() {
        return rand() % 6 + 1;
    }

    int RollDice() {
        Roll1 = RollDie();
        Roll2 = RollDie();
        TotalRoll = Roll1 + Roll2;
    }

    int getTotalRoll() const {
        return TotalRoll;
    }

};


int main() {
    Dice dice;
    int totalRoll;

    dice.RollDice();
    cout << "You rolled " << dice.getTotalRoll() << endl;
    return 0;
};