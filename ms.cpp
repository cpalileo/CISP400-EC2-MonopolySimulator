#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


struct Space {
    int SpaceNumber;
    string SpaceName;
    char SpaceAction;
    int SpaceCount;

    Space()
        : SpaceNumber(0), SpaceName(""), SpaceAction(' '), SpaceCount(0) {}
};


struct Chance {
    string ChanceName;
    char ChanceAction;

    Chance()
        : ChanceName(""), ChanceAction(' ') {}
};


struct Chest {
    string ChestName;
    char ChestAction;

    Chest()
        : ChestName(""), ChestAction(' ') {}
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
        BoardSpace[0].SpaceCount = 0;

        // Space 1
        BoardSpace[1].SpaceNumber = 1;
        BoardSpace[1].SpaceName = "Mediterranean Avenue";
        BoardSpace[1].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[1].SpaceCount = 0;

        // Space 2
        BoardSpace[2].SpaceNumber = 2;
        BoardSpace[2].SpaceName = "Community Chest";
        BoardSpace[2].SpaceAction = 'C'; // 'C' for Community Chest
        BoardSpace[2].SpaceCount = 0;

        // Space 3
        BoardSpace[3].SpaceNumber = 3;
        BoardSpace[3].SpaceName = "Baltic Avenue";
        BoardSpace[3].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[3].SpaceCount = 0;

        // Space 4
        BoardSpace[4].SpaceNumber = 4;
        BoardSpace[4].SpaceName = "Income Tax";
        BoardSpace[4].SpaceAction = 'T'; // 'T' for Tax
        BoardSpace[4].SpaceCount = 0;

        // Space 5
        BoardSpace[5].SpaceNumber = 5;
        BoardSpace[5].SpaceName = "Reading Railroad";
        BoardSpace[5].SpaceAction = 'R'; // 'R' for Railroad
        BoardSpace[5].SpaceCount = 0;

        // Space 6
        BoardSpace[6].SpaceNumber = 6;
        BoardSpace[6].SpaceName = "Oriental Avenue";
        BoardSpace[6].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[6].SpaceCount = 0;

        // Space 7
        BoardSpace[7].SpaceNumber = 7;
        BoardSpace[7].SpaceName = "Chance";
        BoardSpace[7].SpaceAction = 'H'; // 'H' for Chance
        BoardSpace[7].SpaceCount = 0;

        // Space 8
        BoardSpace[8].SpaceNumber = 8;
        BoardSpace[8].SpaceName = "Vermont Avenue";
        BoardSpace[8].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[8].SpaceCount = 0;

        // Space 9
        BoardSpace[9].SpaceNumber = 9;
        BoardSpace[9].SpaceName = "Connecticut Avenue";
        BoardSpace[9].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[9].SpaceCount = 0;

        // Space 10
        BoardSpace[10].SpaceNumber = 10;
        BoardSpace[10].SpaceName = "Just Visiting / In Jail";
        BoardSpace[10].SpaceAction = 'J'; // 'J' for Jail
        BoardSpace[10].SpaceCount = 0;

        // Space 11
        BoardSpace[11].SpaceNumber = 11;
        BoardSpace[11].SpaceName = "St. Charles Place";
        BoardSpace[11].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[11].SpaceCount = 0;

        // Space 12
        BoardSpace[12].SpaceNumber = 12;
        BoardSpace[12].SpaceName = "Electric Company";
        BoardSpace[12].SpaceAction = 'U'; // 'U' for Utility
        BoardSpace[12].SpaceCount = 0;

        // Space 13
        BoardSpace[13].SpaceNumber = 13;
        BoardSpace[13].SpaceName = "States Avenue";
        BoardSpace[13].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[13].SpaceCount = 0;

        // Space 14
        BoardSpace[14].SpaceNumber = 14;
        BoardSpace[14].SpaceName = "Virginia Avenue";
        BoardSpace[14].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[14].SpaceCount = 0;

        // Space 15
        BoardSpace[15].SpaceNumber = 15;
        BoardSpace[15].SpaceName = "Pennsylvania Railroad";
        BoardSpace[15].SpaceAction = 'R'; // 'R' for Railroad
        BoardSpace[15].SpaceCount = 0;

        // Space 16
        BoardSpace[16].SpaceNumber = 16;
        BoardSpace[16].SpaceName = "St. James Place";
        BoardSpace[16].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[16].SpaceCount = 0;

        // Space 17
        BoardSpace[17].SpaceNumber = 17;
        BoardSpace[17].SpaceName = "Community Chest";
        BoardSpace[17].SpaceAction = 'C'; // 'C' for Community Chest
        BoardSpace[17].SpaceCount = 0;

        // Space 18
        BoardSpace[18].SpaceNumber = 18;
        BoardSpace[18].SpaceName = "Tennessee Avenue";
        BoardSpace[18].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[18].SpaceCount = 0;

        // Space 19
        BoardSpace[19].SpaceNumber = 19;
        BoardSpace[19].SpaceName = "New York Avenue";
        BoardSpace[19].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[19].SpaceCount = 0;

        // Space 20
        BoardSpace[20].SpaceNumber = 20;
        BoardSpace[20].SpaceName = "Free Parking";
        BoardSpace[20].SpaceAction = 'F'; // 'F' for Free Parking
        BoardSpace[20].SpaceCount = 0;

        // Space 21
        BoardSpace[21].SpaceNumber = 21;
        BoardSpace[21].SpaceName = "Kentucky Avenue";
        BoardSpace[21].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[21].SpaceCount = 0;

        // Space 22
        BoardSpace[22].SpaceNumber = 22;
        BoardSpace[22].SpaceName = "Chance";
        BoardSpace[22].SpaceAction = 'H'; // 'H' for Chance
        BoardSpace[22].SpaceCount = 0;

        // Space 23
        BoardSpace[23].SpaceNumber = 23;
        BoardSpace[23].SpaceName = "Indiana Avenue";
        BoardSpace[23].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[23].SpaceCount = 0;

        // Space 24
        BoardSpace[24].SpaceNumber = 24;
        BoardSpace[24].SpaceName = "Illinois Avenue";
        BoardSpace[24].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[24].SpaceCount = 0;

        // Space 25
        BoardSpace[25].SpaceNumber = 25;
        BoardSpace[25].SpaceName = "B&O Railroad";
        BoardSpace[25].SpaceAction = 'R'; // 'R' for Railroad
        BoardSpace[25].SpaceCount = 0;

        // Space 26
        BoardSpace[26].SpaceNumber = 26;
        BoardSpace[26].SpaceName = "Atlantic Avenue";
        BoardSpace[26].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[26].SpaceCount = 0;

        // Space 27
        BoardSpace[27].SpaceNumber = 27;
        BoardSpace[27].SpaceName = "Ventnor Avenue";
        BoardSpace[27].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[27].SpaceCount = 0;

        // Space 28
        BoardSpace[28].SpaceNumber = 28;
        BoardSpace[28].SpaceName = "Water Works";
        BoardSpace[28].SpaceAction = 'U'; // 'U' for Utility
        BoardSpace[28].SpaceCount = 0;

        // Space 29
        BoardSpace[29].SpaceNumber = 29;
        BoardSpace[29].SpaceName = "Marvin Gardens";
        BoardSpace[29].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[29].SpaceCount = 0;

        // Space 30
        BoardSpace[30].SpaceNumber = 30;
        BoardSpace[30].SpaceName = "Go to Jail";
        BoardSpace[30].SpaceAction = 'J'; // 'J' for Jail
        BoardSpace[30].SpaceCount = 0;

        // Space 31
        BoardSpace[31].SpaceNumber = 31;
        BoardSpace[31].SpaceName = "Pacific Avenue";
        BoardSpace[31].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[31].SpaceCount = 0;

        // Space 32
        BoardSpace[32].SpaceNumber = 32;
        BoardSpace[32].SpaceName = "North Carolina Avenue";
        BoardSpace[32].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[32].SpaceCount = 0;

        // Space 33
        BoardSpace[33].SpaceNumber = 33;
        BoardSpace[33].SpaceName = "Community Chest";
        BoardSpace[33].SpaceAction = 'C'; // 'C' for Community Chest
        BoardSpace[33].SpaceCount = 0;

        // Space 34
        BoardSpace[34].SpaceNumber = 34;
        BoardSpace[34].SpaceName = "Pennsylvania Avenue";
        BoardSpace[34].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[34].SpaceCount = 0;

        // Space 35
        BoardSpace[35].SpaceNumber = 35;
        BoardSpace[35].SpaceName = "Short Line Railroad";
        BoardSpace[35].SpaceAction = 'R'; // 'R' for Railroad
        BoardSpace[35].SpaceCount = 0;

        // Space 36
        BoardSpace[36].SpaceNumber = 36;
        BoardSpace[36].SpaceName = "Chance";
        BoardSpace[36].SpaceAction = 'H'; // 'H' for Chance
        BoardSpace[36].SpaceCount = 0;

        // Space 37
        BoardSpace[37].SpaceNumber = 37;
        BoardSpace[37].SpaceName = "Park Place";
        BoardSpace[37].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[37].SpaceCount = 0;

        // Space 38
        BoardSpace[38].SpaceNumber = 38;
        BoardSpace[38].SpaceName = "Luxury Tax";
        BoardSpace[38].SpaceAction = 'T'; // 'T' for Tax
        BoardSpace[38].SpaceCount = 0;

        // Space 39 (the last space)
        BoardSpace[39].SpaceNumber = 39;
        BoardSpace[39].SpaceName = "Boardwalk";
        BoardSpace[39].SpaceAction = 'P'; // 'P' for Property
        BoardSpace[39].SpaceCount = 0;
    }


    // Track virtual marker around board (IF handles wrapping around GO)
    void moveSpaces(int& currentPosition, int spaces2Move) {
        currentPosition += spaces2Move;
        if (currentPosition >= 40) {
            currentPosition %= 40;
        }
    }


    int& getSpaceCountRef(int spaceNumber) {
        return BoardSpace[spaceNumber].SpaceCount;
    }


    string getSpaceName(int spaceNumber) {
        return BoardSpace[spaceNumber].SpaceName;
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


class Card {
private:
    Chance ChanceCard[16];
    Chest ChestCard[16];

public:
    // Chance and Community Chest Cards will go here
};


class GameStatistics {
public:
    void TallySpace(Board& board, int& currentPosition) {
        board.getSpaceCountRef(currentPosition)++;
    }    

    void PrintResults(Board& board){
        cout << setw(25) << left << "Space Name" << setw(10) << right << "Space Count" << endl;
        cout << "------------------------------------" << endl;
        
        for (int i = 0; i < 40; i++) {
            cout << setw(25) << left << board.getSpaceName(i) << setw(10) << right << board.getSpaceCountRef(i) << endl;
        }
    }
};


int main() {
    Board board;
    Dice dice;
    GameStatistics gameStatistics;
    int totalRoll;
    int currentPosition = 0;

    board.initializeBoard();

    for (int i = 0; i < 10000; i++) {
        dice.RollDice();
        totalRoll = dice.getTotalRoll();
        board.moveSpaces(currentPosition, totalRoll);
        gameStatistics.TallySpace(board, currentPosition);
    }

    gameStatistics.PrintResults(board);

    cout << "\nEnd Program\n" << endl;
    return 0;
};