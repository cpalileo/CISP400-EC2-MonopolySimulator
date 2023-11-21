#include <iostream>
using namespace std;


struct Space {
    int SpaceNumber;
    string SpaceName;
    char SpecialConditions;
};

Space Boardspaces[40];


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

void initializeBoard() {
    // Space 0 (Go)
    boardSpaces[0].spaceNumber = 0;
    boardSpaces[0].spaceName = "Go";
    boardSpaces[0].specialConditions = 'G'; // 'G' for Go

    // Space 1
    boardSpaces[1].spaceNumber = 1;
    boardSpaces[1].spaceName = "Mediterranean Avenue";
    boardSpaces[1].specialConditions = 'P'; // 'P' for Property

    // Space 2
    boardSpaces[2].spaceNumber = 2;
    boardSpaces[2].spaceName = "Community Chest";
    boardSpaces[2].specialConditions = 'C'; // 'C' for Community Chest

    // Space 3
    boardSpaces[3].spaceNumber = 3;
    boardSpaces[3].spaceName = "Baltic Avenue";
    boardSpaces[3].specialConditions = 'P'; // 'P' for Property

    // Space 4
    boardSpaces[4].spaceNumber = 4;
    boardSpaces[4].spaceName = "Income Tax";
    boardSpaces[4].specialConditions = 'T'; // 'T' for Tax

    // Space 5
    boardSpaces[5].spaceNumber = 5;
    boardSpaces[5].spaceName = "Reading Railroad";
    boardSpaces[5].specialConditions = 'R'; // 'R' for Railroad

    // Space 6
    boardSpaces[6].spaceNumber = 6;
    boardSpaces[6].spaceName = "Oriental Avenue";
    boardSpaces[6].specialConditions = 'P'; // 'P' for Property

    // Space 7
    boardSpaces[7].spaceNumber = 7;
    boardSpaces[7].spaceName = "Chance";
    boardSpaces[7].specialConditions = 'H'; // 'H' for Chance

    // Space 8
    boardSpaces[8].spaceNumber = 8;
    boardSpaces[8].spaceName = "Vermont Avenue";
    boardSpaces[8].specialConditions = 'P'; // 'P' for Property

    // Space 9
    boardSpaces[9].spaceNumber = 9;
    boardSpaces[9].spaceName = "Connecticut Avenue";
    boardSpaces[9].specialConditions = 'P'; // 'P' for Property

    // Space 10
    boardSpaces[10].spaceNumber = 10;
    boardSpaces[10].spaceName = "Just Visiting / In Jail";
    boardSpaces[10].specialConditions = 'J'; // 'J' for Jail

    // Space 11
    boardSpaces[11].spaceNumber = 11;
    boardSpaces[11].spaceName = "St. Charles Place";
    boardSpaces[11].specialConditions = 'P'; // 'P' for Property

    // Space 12
    boardSpaces[12].spaceNumber = 12;
    boardSpaces[12].spaceName = "Electric Company";
    boardSpaces[12].specialConditions = 'U'; // 'U' for Utility

    // Space 13
    boardSpaces[13].spaceNumber = 13;
    boardSpaces[13].spaceName = "States Avenue";
    boardSpaces[13].specialConditions = 'P'; // 'P' for Property

    // Space 14
    boardSpaces[14].spaceNumber = 14;
    boardSpaces[14].spaceName = "Virginia Avenue";
    boardSpaces[14].specialConditions = 'P'; // 'P' for Property

    // Space 15
    boardSpaces[15].spaceNumber = 15;
    boardSpaces[15].spaceName = "Pennsylvania Railroad";
    boardSpaces[15].specialConditions = 'R'; // 'R' for Railroad

    // Space 16
    boardSpaces[16].spaceNumber = 16;
    boardSpaces[16].spaceName = "St. James Place";
    boardSpaces[16].specialConditions = 'P'; // 'P' for Property

    // Space 17
    boardSpaces[17].spaceNumber = 17;
    boardSpaces[17].spaceName = "Community Chest";
    boardSpaces[17].specialConditions = 'C'; // 'C' for Community Chest

    // Space 18
    boardSpaces[18].spaceNumber = 18;
    boardSpaces[18].spaceName = "Tennessee Avenue";
    boardSpaces[18].specialConditions = 'P'; // 'P' for Property

    // Space 19
    boardSpaces[19].spaceNumber = 19;
    boardSpaces[19].spaceName = "New York Avenue";
    boardSpaces[19].specialConditions = 'P'; // 'P' for Property

        // Space 20
    boardSpaces[20].spaceNumber = 20;
    boardSpaces[20].spaceName = "Free Parking";
    boardSpaces[20].specialConditions = 'F'; // 'F' for Free Parking

    // Space 21
    boardSpaces[21].spaceNumber = 21;
    boardSpaces[21].spaceName = "Kentucky Avenue";
    boardSpaces[21].specialConditions = 'P'; // 'P' for Property

    // Space 22
    boardSpaces[22].spaceNumber = 22;
    boardSpaces[22].spaceName = "Chance";
    boardSpaces[22].specialConditions = 'H'; // 'H' for Chance

    // Space 23
    boardSpaces[23].spaceNumber = 23;
    boardSpaces[23].spaceName = "Indiana Avenue";
    boardSpaces[23].specialConditions = 'P'; // 'P' for Property

    // Space 24
    boardSpaces[24].spaceNumber = 24;
    boardSpaces[24].spaceName = "Illinois Avenue";
    boardSpaces[24].specialConditions = 'P'; // 'P' for Property

    // Space 25
    boardSpaces[25].spaceNumber = 25;
    boardSpaces[25].spaceName = "B&O Railroad";
    boardSpaces[25].specialConditions = 'R'; // 'R' for Railroad

    // Space 26
    boardSpaces[26].spaceNumber = 26;
    boardSpaces[26].spaceName = "Atlantic Avenue";
    boardSpaces[26].specialConditions = 'P'; // 'P' for Property

    // Space 27
    boardSpaces[27].spaceNumber = 27;
    boardSpaces[27].spaceName = "Ventnor Avenue";
    boardSpaces[27].specialConditions = 'P'; // 'P' for Property

    // Space 28
    boardSpaces[28].spaceNumber = 28;
    boardSpaces[28].spaceName = "Water Works";
    boardSpaces[28].specialConditions = 'U'; // 'U' for Utility

    // Space 29
    boardSpaces[29].spaceNumber = 29;
    boardSpaces[29].spaceName = "Marvin Gardens";
    boardSpaces[29].specialConditions = 'P'; // 'P' for Property

    // Space 30
    boardSpaces[30].spaceNumber = 30;
    boardSpaces[30].spaceName = "Go to Jail";
    boardSpaces[30].specialConditions = 'J'; // 'J' for Jail

    // Space 31
    boardSpaces[31].spaceNumber = 31;
    boardSpaces[31].spaceName = "Pacific Avenue";
    boardSpaces[31].specialConditions = 'P'; // 'P' for Property

    // Space 32
    boardSpaces[32].spaceNumber = 32;
    boardSpaces[32].spaceName = "North Carolina Avenue";
    boardSpaces[32].specialConditions = 'P'; // 'P' for Property

    // Space 33
    boardSpaces[33].spaceNumber = 33;
    boardSpaces[33].spaceName = "Community Chest";
    boardSpaces[33].specialConditions = 'C'; // 'C' for Community Chest

    // Space 34
    boardSpaces[34].spaceNumber = 34;
    boardSpaces[34].spaceName = "Pennsylvania Avenue";
    boardSpaces[34].specialConditions = 'P'; // 'P' for Property

    // Space 35
    boardSpaces[35].spaceNumber = 35;
    boardSpaces[35].spaceName = "Short Line Railroad";
    boardSpaces[35].specialConditions = 'R'; // 'R' for Railroad

    // Space 36
    boardSpaces[36].spaceNumber = 36;
    boardSpaces[36].spaceName = "Chance";
    boardSpaces[36].specialConditions = 'H'; // 'H' for Chance

    // Space 37
    boardSpaces[37].spaceNumber = 37;
    boardSpaces[37].spaceName = "Park Place";
    boardSpaces[37].specialConditions = 'P'; // 'P' for Property

    // Space 38
    boardSpaces[38].spaceNumber = 38;
    boardSpaces[38].spaceName = "Luxury Tax";
    boardSpaces[38].specialConditions = 'T'; // 'T' for Tax

    // Space 39 (the last space)
    boardSpaces[39].spaceNumber = 39;
    boardSpaces[39].spaceName = "Boardwalk";
    boardSpaces[39].specialConditions = 'P'; // 'P' for Property
}
