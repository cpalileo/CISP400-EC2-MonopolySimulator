#include <iostream>
using namespace std;


struct Space {
    int SpaceNumber;
    string SpaceName;
    char SpaceAction;
    int SpaceCount;

    Space()
        : SpaceNumber(0), SpaceName(""), SpaceAction(' '), SpaceCount(0) {}
};


class Board {
private: 
    Space BoardSpace[40];

public: 
    Board() {
        initializeBoard();
    }

    void initializeBoard() {
        // Space 0 (Go)
        BoardSpace[0].SpaceNumber = 0;
        BoardSpace[0].SpaceName = "Go";
        BoardSpace[0].SpaceAction = 'G'; // 'G' for Go

        // Space 1
        BoardSpace[1].SpaceNumber = 1;
        BoardSpace[1].SpaceName = "Mediterranean Avenue";
        BoardSpace[1].SpaceAction = 'P'; // 'P' for Property

        // Space 2
        BoardSpace[2].SpaceNumber = 2;
        BoardSpace[2].SpaceName = "Community Chest";
        BoardSpace[2].SpaceAction = 'C'; // 'C' for Community Chest

        // Space 3
        BoardSpace[3].SpaceNumber = 3;
        BoardSpace[3].SpaceName = "Baltic Avenue";
        BoardSpace[3].SpaceAction = 'P'; // 'P' for Property

        // Space 4
        BoardSpace[4].SpaceNumber = 4;
        BoardSpace[4].SpaceName = "Income Tax";
        BoardSpace[4].SpaceAction = 'T'; // 'T' for Tax

        // Space 5
        BoardSpace[5].SpaceNumber = 5;
        BoardSpace[5].SpaceName = "Reading Railroad";
        BoardSpace[5].SpaceAction = 'R'; // 'R' for Railroad

        // Space 6
        BoardSpace[6].SpaceNumber = 6;
        BoardSpace[6].SpaceName = "Oriental Avenue";
        BoardSpace[6].SpaceAction = 'P'; // 'P' for Property

        // Space 7
        BoardSpace[7].SpaceNumber = 7;
        BoardSpace[7].SpaceName = "Chance";
        BoardSpace[7].SpaceAction = 'H'; // 'H' for Chance

        // Space 8
        BoardSpace[8].SpaceNumber = 8;
        BoardSpace[8].SpaceName = "Vermont Avenue";
        BoardSpace[8].SpaceAction = 'P'; // 'P' for Property

        // Space 9
        BoardSpace[9].SpaceNumber = 9;
        BoardSpace[9].SpaceName = "Connecticut Avenue";
        BoardSpace[9].SpaceAction = 'P'; // 'P' for Property

        // Space 10
        BoardSpace[10].SpaceNumber = 10;
        BoardSpace[10].SpaceName = "Just Visiting / In Jail";
        BoardSpace[10].SpaceAction = 'J'; // 'J' for Jail

        // Space 11
        BoardSpace[11].SpaceNumber = 11;
        BoardSpace[11].SpaceName = "St. Charles Place";
        BoardSpace[11].SpaceAction = 'P'; // 'P' for Property

        // Space 12
        BoardSpace[12].SpaceNumber = 12;
        BoardSpace[12].SpaceName = "Electric Company";
        BoardSpace[12].SpaceAction = 'U'; // 'U' for Utility

        // Space 13
        BoardSpace[13].SpaceNumber = 13;
        BoardSpace[13].SpaceName = "States Avenue";
        BoardSpace[13].SpaceAction = 'P'; // 'P' for Property

        // Space 14
        BoardSpace[14].SpaceNumber = 14;
        BoardSpace[14].SpaceName = "Virginia Avenue";
        BoardSpace[14].SpaceAction = 'P'; // 'P' for Property

        // Space 15
        BoardSpace[15].SpaceNumber = 15;
        BoardSpace[15].SpaceName = "Pennsylvania Railroad";
        BoardSpace[15].SpaceAction = 'R'; // 'R' for Railroad

        // Space 16
        BoardSpace[16].SpaceNumber = 16;
        BoardSpace[16].SpaceName = "St. James Place";
        BoardSpace[16].SpaceAction = 'P'; // 'P' for Property

        // Space 17
        BoardSpace[17].SpaceNumber = 17;
        BoardSpace[17].SpaceName = "Community Chest";
        BoardSpace[17].SpaceAction = 'C'; // 'C' for Community Chest

        // Space 18
        BoardSpace[18].SpaceNumber = 18;
        BoardSpace[18].SpaceName = "Tennessee Avenue";
        BoardSpace[18].SpaceAction = 'P'; // 'P' for Property

        // Space 19
        BoardSpace[19].SpaceNumber = 19;
        BoardSpace[19].SpaceName = "New York Avenue";
        BoardSpace[19].SpaceAction = 'P'; // 'P' for Property

            // Space 20
        BoardSpace[20].SpaceNumber = 20;
        BoardSpace[20].SpaceName = "Free Parking";
        BoardSpace[20].SpaceAction = 'F'; // 'F' for Free Parking

        // Space 21
        BoardSpace[21].SpaceNumber = 21;
        BoardSpace[21].SpaceName = "Kentucky Avenue";
        BoardSpace[21].SpaceAction = 'P'; // 'P' for Property

        // Space 22
        BoardSpace[22].SpaceNumber = 22;
        BoardSpace[22].SpaceName = "Chance";
        BoardSpace[22].SpaceAction = 'H'; // 'H' for Chance

        // Space 23
        BoardSpace[23].SpaceNumber = 23;
        BoardSpace[23].SpaceName = "Indiana Avenue";
        BoardSpace[23].SpaceAction = 'P'; // 'P' for Property

        // Space 24
        BoardSpace[24].SpaceNumber = 24;
        BoardSpace[24].SpaceName = "Illinois Avenue";
        BoardSpace[24].SpaceAction = 'P'; // 'P' for Property

        // Space 25
        BoardSpace[25].SpaceNumber = 25;
        BoardSpace[25].SpaceName = "B&O Railroad";
        BoardSpace[25].SpaceAction = 'R'; // 'R' for Railroad

        // Space 26
        BoardSpace[26].SpaceNumber = 26;
        BoardSpace[26].SpaceName = "Atlantic Avenue";
        BoardSpace[26].SpaceAction = 'P'; // 'P' for Property

        // Space 27
        BoardSpace[27].SpaceNumber = 27;
        BoardSpace[27].SpaceName = "Ventnor Avenue";
        BoardSpace[27].SpaceAction = 'P'; // 'P' for Property

        // Space 28
        BoardSpace[28].SpaceNumber = 28;
        BoardSpace[28].SpaceName = "Water Works";
        BoardSpace[28].SpaceAction = 'U'; // 'U' for Utility

        // Space 29
        BoardSpace[29].SpaceNumber = 29;
        BoardSpace[29].SpaceName = "Marvin Gardens";
        BoardSpace[29].SpaceAction = 'P'; // 'P' for Property

        // Space 30
        BoardSpace[30].SpaceNumber = 30;
        BoardSpace[30].SpaceName = "Go to Jail";
        BoardSpace[30].SpaceAction = 'J'; // 'J' for Jail

        // Space 31
        BoardSpace[31].SpaceNumber = 31;
        BoardSpace[31].SpaceName = "Pacific Avenue";
        BoardSpace[31].SpaceAction = 'P'; // 'P' for Property

        // Space 32
        BoardSpace[32].SpaceNumber = 32;
        BoardSpace[32].SpaceName = "North Carolina Avenue";
        BoardSpace[32].SpaceAction = 'P'; // 'P' for Property

        // Space 33
        BoardSpace[33].SpaceNumber = 33;
        BoardSpace[33].SpaceName = "Community Chest";
        BoardSpace[33].SpaceAction = 'C'; // 'C' for Community Chest

        // Space 34
        BoardSpace[34].SpaceNumber = 34;
        BoardSpace[34].SpaceName = "Pennsylvania Avenue";
        BoardSpace[34].SpaceAction = 'P'; // 'P' for Property

        // Space 35
        BoardSpace[35].SpaceNumber = 35;
        BoardSpace[35].SpaceName = "Short Line Railroad";
        BoardSpace[35].SpaceAction = 'R'; // 'R' for Railroad

        // Space 36
        BoardSpace[36].SpaceNumber = 36;
        BoardSpace[36].SpaceName = "Chance";
        BoardSpace[36].SpaceAction = 'H'; // 'H' for Chance

        // Space 37
        BoardSpace[37].SpaceNumber = 37;
        BoardSpace[37].SpaceName = "Park Place";
        BoardSpace[37].SpaceAction = 'P'; // 'P' for Property

        // Space 38
        BoardSpace[38].SpaceNumber = 38;
        BoardSpace[38].SpaceName = "Luxury Tax";
        BoardSpace[38].SpaceAction = 'T'; // 'T' for Tax

        // Space 39 (the last space)
        BoardSpace[39].SpaceNumber = 39;
        BoardSpace[39].SpaceName = "Boardwalk";
        BoardSpace[39].SpaceAction = 'P'; // 'P' for Property
    }

    // Track virtual marker around board (IF handles wrapping around GO)
    void moveSpaces(int& currentPosition, int spaces2Move) {
        currentPosition += spaces2Move;
        if (currentPosition >= 40) {
            currentPosition %= 40;
        }
        cout << "You are on " << BoardSpace[currentPosition].SpaceNumber << endl;
    }
};


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
    Board board;
    Dice dice;
    int totalRoll;
    int currentPosition = 0;

    board.initializeBoard();

    for (int i = 0; i < 10; i++) {
        dice.RollDice();
        totalRoll = dice.getTotalRoll();
        cout << "You rolled " << dice.getTotalRoll() << endl;
        board.moveSpaces(currentPosition, totalRoll);
    }
    return 0;
};