#include <iostream>
using namespace std;


struct Space {
    int SpaceNumber;
    string SpaceName;
    char SpecialConditions;
    int SpaceCount;
};


class Board {
private: 
    Space BoardSpaces[40];

public: 
    Board() {
        initializeBoard();
    }

    void initializeBoard() {
        // Space 0 (Go)
        BoardSpaces[0].SpaceNumber = 0;
        BoardSpaces[0].SpaceName = "Go";
        BoardSpaces[0].SpecialConditions = 'G'; // 'G' for Go

        // Space 1
        BoardSpaces[1].SpaceNumber = 1;
        BoardSpaces[1].SpaceName = "Mediterranean Avenue";
        BoardSpaces[1].SpecialConditions = 'P'; // 'P' for Property

        // Space 2
        BoardSpaces[2].SpaceNumber = 2;
        BoardSpaces[2].SpaceName = "Community Chest";
        BoardSpaces[2].SpecialConditions = 'C'; // 'C' for Community Chest

        // Space 3
        BoardSpaces[3].SpaceNumber = 3;
        BoardSpaces[3].SpaceName = "Baltic Avenue";
        BoardSpaces[3].SpecialConditions = 'P'; // 'P' for Property

        // Space 4
        BoardSpaces[4].SpaceNumber = 4;
        BoardSpaces[4].SpaceName = "Income Tax";
        BoardSpaces[4].SpecialConditions = 'T'; // 'T' for Tax

        // Space 5
        BoardSpaces[5].SpaceNumber = 5;
        BoardSpaces[5].SpaceName = "Reading Railroad";
        BoardSpaces[5].SpecialConditions = 'R'; // 'R' for Railroad

        // Space 6
        BoardSpaces[6].SpaceNumber = 6;
        BoardSpaces[6].SpaceName = "Oriental Avenue";
        BoardSpaces[6].SpecialConditions = 'P'; // 'P' for Property

        // Space 7
        BoardSpaces[7].SpaceNumber = 7;
        BoardSpaces[7].SpaceName = "Chance";
        BoardSpaces[7].SpecialConditions = 'H'; // 'H' for Chance

        // Space 8
        BoardSpaces[8].SpaceNumber = 8;
        BoardSpaces[8].SpaceName = "Vermont Avenue";
        BoardSpaces[8].SpecialConditions = 'P'; // 'P' for Property

        // Space 9
        BoardSpaces[9].SpaceNumber = 9;
        BoardSpaces[9].SpaceName = "Connecticut Avenue";
        BoardSpaces[9].SpecialConditions = 'P'; // 'P' for Property

        // Space 10
        BoardSpaces[10].SpaceNumber = 10;
        BoardSpaces[10].SpaceName = "Just Visiting / In Jail";
        BoardSpaces[10].SpecialConditions = 'J'; // 'J' for Jail

        // Space 11
        BoardSpaces[11].SpaceNumber = 11;
        BoardSpaces[11].SpaceName = "St. Charles Place";
        BoardSpaces[11].SpecialConditions = 'P'; // 'P' for Property

        // Space 12
        BoardSpaces[12].SpaceNumber = 12;
        BoardSpaces[12].SpaceName = "Electric Company";
        BoardSpaces[12].SpecialConditions = 'U'; // 'U' for Utility

        // Space 13
        BoardSpaces[13].SpaceNumber = 13;
        BoardSpaces[13].SpaceName = "States Avenue";
        BoardSpaces[13].SpecialConditions = 'P'; // 'P' for Property

        // Space 14
        BoardSpaces[14].SpaceNumber = 14;
        BoardSpaces[14].SpaceName = "Virginia Avenue";
        BoardSpaces[14].SpecialConditions = 'P'; // 'P' for Property

        // Space 15
        BoardSpaces[15].SpaceNumber = 15;
        BoardSpaces[15].SpaceName = "Pennsylvania Railroad";
        BoardSpaces[15].SpecialConditions = 'R'; // 'R' for Railroad

        // Space 16
        BoardSpaces[16].SpaceNumber = 16;
        BoardSpaces[16].SpaceName = "St. James Place";
        BoardSpaces[16].SpecialConditions = 'P'; // 'P' for Property

        // Space 17
        BoardSpaces[17].SpaceNumber = 17;
        BoardSpaces[17].SpaceName = "Community Chest";
        BoardSpaces[17].SpecialConditions = 'C'; // 'C' for Community Chest

        // Space 18
        BoardSpaces[18].SpaceNumber = 18;
        BoardSpaces[18].SpaceName = "Tennessee Avenue";
        BoardSpaces[18].SpecialConditions = 'P'; // 'P' for Property

        // Space 19
        BoardSpaces[19].SpaceNumber = 19;
        BoardSpaces[19].SpaceName = "New York Avenue";
        BoardSpaces[19].SpecialConditions = 'P'; // 'P' for Property

            // Space 20
        BoardSpaces[20].SpaceNumber = 20;
        BoardSpaces[20].SpaceName = "Free Parking";
        BoardSpaces[20].SpecialConditions = 'F'; // 'F' for Free Parking

        // Space 21
        BoardSpaces[21].SpaceNumber = 21;
        BoardSpaces[21].SpaceName = "Kentucky Avenue";
        BoardSpaces[21].SpecialConditions = 'P'; // 'P' for Property

        // Space 22
        BoardSpaces[22].SpaceNumber = 22;
        BoardSpaces[22].SpaceName = "Chance";
        BoardSpaces[22].SpecialConditions = 'H'; // 'H' for Chance

        // Space 23
        BoardSpaces[23].SpaceNumber = 23;
        BoardSpaces[23].SpaceName = "Indiana Avenue";
        BoardSpaces[23].SpecialConditions = 'P'; // 'P' for Property

        // Space 24
        BoardSpaces[24].SpaceNumber = 24;
        BoardSpaces[24].SpaceName = "Illinois Avenue";
        BoardSpaces[24].SpecialConditions = 'P'; // 'P' for Property

        // Space 25
        BoardSpaces[25].SpaceNumber = 25;
        BoardSpaces[25].SpaceName = "B&O Railroad";
        BoardSpaces[25].SpecialConditions = 'R'; // 'R' for Railroad

        // Space 26
        BoardSpaces[26].SpaceNumber = 26;
        BoardSpaces[26].SpaceName = "Atlantic Avenue";
        BoardSpaces[26].SpecialConditions = 'P'; // 'P' for Property

        // Space 27
        BoardSpaces[27].SpaceNumber = 27;
        BoardSpaces[27].SpaceName = "Ventnor Avenue";
        BoardSpaces[27].SpecialConditions = 'P'; // 'P' for Property

        // Space 28
        BoardSpaces[28].SpaceNumber = 28;
        BoardSpaces[28].SpaceName = "Water Works";
        BoardSpaces[28].SpecialConditions = 'U'; // 'U' for Utility

        // Space 29
        BoardSpaces[29].SpaceNumber = 29;
        BoardSpaces[29].SpaceName = "Marvin Gardens";
        BoardSpaces[29].SpecialConditions = 'P'; // 'P' for Property

        // Space 30
        BoardSpaces[30].SpaceNumber = 30;
        BoardSpaces[30].SpaceName = "Go to Jail";
        BoardSpaces[30].SpecialConditions = 'J'; // 'J' for Jail

        // Space 31
        BoardSpaces[31].SpaceNumber = 31;
        BoardSpaces[31].SpaceName = "Pacific Avenue";
        BoardSpaces[31].SpecialConditions = 'P'; // 'P' for Property

        // Space 32
        BoardSpaces[32].SpaceNumber = 32;
        BoardSpaces[32].SpaceName = "North Carolina Avenue";
        BoardSpaces[32].SpecialConditions = 'P'; // 'P' for Property

        // Space 33
        BoardSpaces[33].SpaceNumber = 33;
        BoardSpaces[33].SpaceName = "Community Chest";
        BoardSpaces[33].SpecialConditions = 'C'; // 'C' for Community Chest

        // Space 34
        BoardSpaces[34].SpaceNumber = 34;
        BoardSpaces[34].SpaceName = "Pennsylvania Avenue";
        BoardSpaces[34].SpecialConditions = 'P'; // 'P' for Property

        // Space 35
        BoardSpaces[35].SpaceNumber = 35;
        BoardSpaces[35].SpaceName = "Short Line Railroad";
        BoardSpaces[35].SpecialConditions = 'R'; // 'R' for Railroad

        // Space 36
        BoardSpaces[36].SpaceNumber = 36;
        BoardSpaces[36].SpaceName = "Chance";
        BoardSpaces[36].SpecialConditions = 'H'; // 'H' for Chance

        // Space 37
        BoardSpaces[37].SpaceNumber = 37;
        BoardSpaces[37].SpaceName = "Park Place";
        BoardSpaces[37].SpecialConditions = 'P'; // 'P' for Property

        // Space 38
        BoardSpaces[38].SpaceNumber = 38;
        BoardSpaces[38].SpaceName = "Luxury Tax";
        BoardSpaces[38].SpecialConditions = 'T'; // 'T' for Tax

        // Space 39 (the last space)
        BoardSpaces[39].SpaceNumber = 39;
        BoardSpaces[39].SpaceName = "Boardwalk";
        BoardSpaces[39].SpecialConditions = 'P'; // 'P' for Property
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

    board.initializeBoard();
    dice.RollDice();
    cout << "You rolled " << dice.getTotalRoll() << endl;
    return 0;
};