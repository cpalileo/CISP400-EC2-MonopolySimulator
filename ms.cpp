/********************************************************
* Author:      Christopher Palileo                      *
* Professor:   Caleb Fowler                             *
* Class:       CISP 400                                 *
* Assignment:  Extra Credit 2: Monopoly Simulator (ms)  *
* Date:        11/27/2023                               *
* Description: Monopoly Simulator for Keeping Stats     *
********************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Struct for gameboard spaces
struct Space {
    int SpaceNumber;
    string SpaceName;
    char SpaceAction;
    int SpaceCount;

    Space()
        : SpaceNumber(0), SpaceName(""), SpaceAction(' '), SpaceCount(0) {}
};


// Struct for Chance Cards
struct Chance {
    string ChanceName;
    char ChanceCode;
    int ChanceAction;

    Chance()
        : ChanceName(""), ChanceCode(' '), ChanceAction() {}
};


// Struct for Community Chest Cards
struct Chest {
    string ChestName;
    char ChestCode;
    int ChestAction;

    Chest()
        : ChestName(""), ChestCode(' '), ChestAction() {}
};


// Card class hold each cards attributes and logic for drawing cards
class Card {
private:
    Chance ChanceCard[16];
    Chest ChestCard[17];

public:
    Card() {
        initializeChanceCards();
        initializeCommunityChestCards();
    }

    void initializeChanceCards() {
        ChanceCard[0].ChanceName = "Advance to Go";
        ChanceCard[0].ChanceCode = 'M';
        ChanceCard[0].ChanceAction = 0;

        ChanceCard[1].ChanceName = "Advance to Illinois Ave.";
        ChanceCard[1].ChanceCode = 'M';
        ChanceCard[1].ChanceAction = 24;

        ChanceCard[2].ChanceName = "Advance to St. Charles Place";
        ChanceCard[2].ChanceCode = 'M';
        ChanceCard[2].ChanceAction = 11;

        ChanceCard[3].ChanceName = "Advance to nearest Utility";
        ChanceCard[3].ChanceCode = 'M';
        ChanceCard[3].ChanceAction = 101;

        ChanceCard[4].ChanceName = "Advance to nearest Railroad";
        ChanceCard[4].ChanceCode = 'M';
        ChanceCard[4].ChanceAction = 102;

        ChanceCard[5].ChanceName = "Bank pays you dividend of $50";
        ChanceCard[5].ChanceCode = 'C';

        ChanceCard[6].ChanceName = "Get out of Jail free, this card may be kept until needed, or traded/sold";
        ChanceCard[6].ChanceCode = 'J';

        ChanceCard[7].ChanceName = "Go back 3 spaces";
        ChanceCard[7].ChanceCode = 'M';
        ChanceCard[7].ChanceAction = 103;

        ChanceCard[8].ChanceName = "Go to Jail, go directly to jail. Do not pass Go, do not collect $200";
        ChanceCard[8].ChanceCode = 'M';
        ChanceCard[8].ChanceAction = 10;

        ChanceCard[9].ChanceName = "Make general repairs on all your property, for each house pay $25";
        ChanceCard[9].ChanceCode = 'P';

        ChanceCard[10].ChanceName = "Pay poor tax of $15";
        ChanceCard[10].ChanceCode = 'P';

        ChanceCard[11].ChanceName = "Take a trip to Reading Railroad";
        ChanceCard[11].ChanceCode = 'M';
        ChanceCard[11].ChanceAction = 5;

        ChanceCard[12].ChanceName = "Take a walk on the Boardwalk, advance token to Boardwalk";
        ChanceCard[12].ChanceCode = 'M';
        ChanceCard[12].ChanceAction = 39;

        ChanceCard[13].ChanceName = "You have been elected chairman of the board, pay each player $50";
        ChanceCard[13].ChanceCode = 'P';

        ChanceCard[14].ChanceName = "Your building loan matures, collect $150";
        ChanceCard[14].ChanceCode = 'C';

        ChanceCard[15].ChanceName = "You have won a crossword competition - collect $100";
        ChanceCard[15].ChanceCode = 'C';
    }

    void initializeCommunityChestCards() {
        ChestCard[0].ChestName = "Advance to Go";
        ChestCard[0].ChestCode = 'M';
        ChestCard[0].ChestAction = 0;

        ChestCard[1].ChestName = "Bank error in your favor";
        ChestCard[1].ChestCode = 'C';

        ChestCard[2].ChestName = "Doctor's fees, Pay $50";
        ChestCard[2].ChestCode = 'P';

        ChestCard[3].ChestName = "From sale of stock you get $45";
        ChestCard[3].ChestCode = 'C';

        ChestCard[4].ChestName = "Get out of Jail free, this card may be kept until needed, or traded/sold";
        ChestCard[4].ChestCode = 'J';

        ChestCard[5].ChestName = "Go to Jail, go directly to jail. Do not pass Go, do not collect $200";
        ChestCard[5].ChestCode = 'J';

        ChestCard[6].ChestName = "Grand Opera Night, collect $50 from every player for opening night seats";
        ChestCard[6].ChestCode = 'C';

        ChestCard[7].ChestName = "Holiday Fund matures - Receive $100";
        ChestCard[7].ChestCode = 'C';

        ChestCard[8].ChestName = "Income tax refund, collect $20";
        ChestCard[8].ChestCode = 'C';

        ChestCard[9].ChestName = "It is your birthday - Collect $10 from each player";
        ChestCard[9].ChestCode = 'C';

        ChestCard[10].ChestName = "Life insurance matures, collect $100";
        ChestCard[10].ChestCode = 'C';

        ChestCard[11].ChestName = "Hospital Fees. Pay $50";
        ChestCard[11].ChestCode = 'P';

        ChestCard[12].ChestName = "School fees. Pay $50";
        ChestCard[12].ChestCode = 'P';

        ChestCard[13].ChestName = "Receive $25 consultancy fee";
        ChestCard[13].ChestCode = 'C';

        ChestCard[14].ChestName = "You are assessed for street repairs. $40 per house, $115 per hotel";
        ChestCard[14].ChestCode = 'P';

        ChestCard[15].ChestName = "You inherit $100";
        ChestCard[15].ChestCode = 'C';

        ChestCard[16].ChestName = "You win second prize in a beauty contest - collect $10";
        ChestCard[16].ChestCode = 'C';
    }

    int DrawCard(char cardType) {
        switch (cardType) {
            case '?': // Checks if Chance Card
                for (int i = 0; i < 16; i++) {
                    if (ChanceCard[i].ChanceCode == 'M'){ // Checks if it's a movement card
                        return ChanceCard[i].ChanceAction; // Returns movement code
                    }
                }
                break;
            case 'C': // Checks if Community Chest Card
                for (int i = 0; i < 17; i++) {
                    if (ChestCard[i].ChestCode == 'M') {
                        return ChestCard[i].ChestAction; // Returns movmeent code
                    }
                }
                break;
        }
    }
};


// Board class defines board spaces attributes, wrapping around board, 
// and board movement caused by other special circumstances (not dice)
class Board {
private: 
    Space BoardSpace[40];
    Card cardDecks;

public: 
    Board() {
        initializeBoard();
    }

    void initializeBoard() {
        // Space 0 (Go)
        BoardSpace[0].SpaceNumber = 0;
        BoardSpace[0].SpaceName = "Go";
        BoardSpace[0].SpaceAction = 'G';
        BoardSpace[0].SpaceCount = 0;

        BoardSpace[1].SpaceNumber = 1;
        BoardSpace[1].SpaceName = "Mediterranean Avenue";
        BoardSpace[1].SpaceAction = 'P'; 
        BoardSpace[1].SpaceCount = 0;

        BoardSpace[2].SpaceNumber = 2;
        BoardSpace[2].SpaceName = "Community Chest";
        BoardSpace[2].SpaceAction = 'C'; 
        BoardSpace[2].SpaceCount = 0;

        BoardSpace[3].SpaceNumber = 3;
        BoardSpace[3].SpaceName = "Baltic Avenue";
        BoardSpace[3].SpaceAction = 'P'; 
        BoardSpace[3].SpaceCount = 0;

        BoardSpace[4].SpaceNumber = 4;
        BoardSpace[4].SpaceName = "Income Tax";
        BoardSpace[4].SpaceAction = 'T'; 
        BoardSpace[4].SpaceCount = 0;

        BoardSpace[5].SpaceNumber = 5;
        BoardSpace[5].SpaceName = "Reading Railroad";
        BoardSpace[5].SpaceAction = 'R'; 
        BoardSpace[5].SpaceCount = 0;

        BoardSpace[6].SpaceNumber = 6;
        BoardSpace[6].SpaceName = "Oriental Avenue";
        BoardSpace[6].SpaceAction = 'P';
        BoardSpace[6].SpaceCount = 0;

        BoardSpace[7].SpaceNumber = 7;
        BoardSpace[7].SpaceName = "Chance";
        BoardSpace[7].SpaceAction = '?'; 
        BoardSpace[7].SpaceCount = 0;

        BoardSpace[8].SpaceNumber = 8;
        BoardSpace[8].SpaceName = "Vermont Avenue";
        BoardSpace[8].SpaceAction = 'P'; 
        BoardSpace[8].SpaceCount = 0;

        BoardSpace[9].SpaceNumber = 9;
        BoardSpace[9].SpaceName = "Connecticut Avenue";
        BoardSpace[9].SpaceAction = 'P'; 
        BoardSpace[9].SpaceCount = 0;

        BoardSpace[10].SpaceNumber = 10;
        BoardSpace[10].SpaceName = "Just Visiting / In Jail";
        BoardSpace[10].SpaceAction = 'V'; 
        BoardSpace[10].SpaceCount = 0;

        BoardSpace[11].SpaceNumber = 11;
        BoardSpace[11].SpaceName = "St. Charles Place";
        BoardSpace[11].SpaceAction = 'P'; 
        BoardSpace[11].SpaceCount = 0;

        BoardSpace[12].SpaceNumber = 12;
        BoardSpace[12].SpaceName = "Electric Company";
        BoardSpace[12].SpaceAction = 'U'; 
        BoardSpace[12].SpaceCount = 0;

        BoardSpace[13].SpaceNumber = 13;
        BoardSpace[13].SpaceName = "States Avenue";
        BoardSpace[13].SpaceAction = 'P'; 
        BoardSpace[13].SpaceCount = 0;

        BoardSpace[14].SpaceNumber = 14;
        BoardSpace[14].SpaceName = "Virginia Avenue";
        BoardSpace[14].SpaceAction = 'P'; 
        BoardSpace[14].SpaceCount = 0;

        BoardSpace[15].SpaceNumber = 15;
        BoardSpace[15].SpaceName = "Pennsylvania Railroad";
        BoardSpace[15].SpaceAction = 'R'; 
        BoardSpace[15].SpaceCount = 0;

        BoardSpace[16].SpaceNumber = 16;
        BoardSpace[16].SpaceName = "St. James Place";
        BoardSpace[16].SpaceAction = 'P'; 
        BoardSpace[16].SpaceCount = 0;

        BoardSpace[17].SpaceNumber = 17;
        BoardSpace[17].SpaceName = "Community Chest";
        BoardSpace[17].SpaceAction = 'C'; 
        BoardSpace[17].SpaceCount = 0;

        BoardSpace[18].SpaceNumber = 18;
        BoardSpace[18].SpaceName = "Tennessee Avenue";
        BoardSpace[18].SpaceAction = 'P';
        BoardSpace[18].SpaceCount = 0;

        BoardSpace[19].SpaceNumber = 19;
        BoardSpace[19].SpaceName = "New York Avenue";
        BoardSpace[19].SpaceAction = 'P'; 
        BoardSpace[19].SpaceCount = 0;

        BoardSpace[20].SpaceNumber = 20;
        BoardSpace[20].SpaceName = "Free Parking";
        BoardSpace[20].SpaceAction = 'F'; 
        BoardSpace[20].SpaceCount = 0;

        BoardSpace[21].SpaceNumber = 21;
        BoardSpace[21].SpaceName = "Kentucky Avenue";
        BoardSpace[21].SpaceAction = 'P'; 
        BoardSpace[21].SpaceCount = 0;        
        
        BoardSpace[22].SpaceNumber = 22;
        BoardSpace[22].SpaceName = "Chance";
        BoardSpace[22].SpaceAction = '?'; 
        BoardSpace[22].SpaceCount = 0;        
        
        BoardSpace[23].SpaceNumber = 23;
        BoardSpace[23].SpaceName = "Indiana Avenue";
        BoardSpace[23].SpaceAction = 'P'; 
        BoardSpace[23].SpaceCount = 0;        
        
        BoardSpace[24].SpaceNumber = 24;
        BoardSpace[24].SpaceName = "Illinois Avenue";
        BoardSpace[24].SpaceAction = 'P'; 
        BoardSpace[24].SpaceCount = 0;        
        
        BoardSpace[25].SpaceNumber = 25;
        BoardSpace[25].SpaceName = "B&O Railroad";
        BoardSpace[25].SpaceAction = 'R';
        BoardSpace[25].SpaceCount = 0;

        BoardSpace[26].SpaceNumber = 26;
        BoardSpace[26].SpaceName = "Atlantic Avenue";
        BoardSpace[26].SpaceAction = 'P';
        BoardSpace[26].SpaceCount = 0;

        BoardSpace[27].SpaceNumber = 27;
        BoardSpace[27].SpaceName = "Ventnor Avenue";
        BoardSpace[27].SpaceAction = 'P';
        BoardSpace[27].SpaceCount = 0;

        BoardSpace[28].SpaceNumber = 28;
        BoardSpace[28].SpaceName = "Water Works";
        BoardSpace[28].SpaceAction = 'U'; 
        BoardSpace[28].SpaceCount = 0;

        BoardSpace[29].SpaceNumber = 29;
        BoardSpace[29].SpaceName = "Marvin Gardens";
        BoardSpace[29].SpaceAction = 'P'; 
        BoardSpace[29].SpaceCount = 0;

        BoardSpace[30].SpaceNumber = 30;
        BoardSpace[30].SpaceName = "Go to Jail";
        BoardSpace[30].SpaceAction = 'J'; 
        BoardSpace[30].SpaceCount = 0;

        BoardSpace[31].SpaceNumber = 31;
        BoardSpace[31].SpaceName = "Pacific Avenue";
        BoardSpace[31].SpaceAction = 'P'; 
        BoardSpace[31].SpaceCount = 0;

        BoardSpace[32].SpaceNumber = 32;
        BoardSpace[32].SpaceName = "North Carolina Avenue";
        BoardSpace[32].SpaceAction = 'P';
        BoardSpace[32].SpaceCount = 0;

        BoardSpace[33].SpaceNumber = 33;
        BoardSpace[33].SpaceName = "Community Chest";
        BoardSpace[33].SpaceAction = 'C'; 
        BoardSpace[33].SpaceCount = 0;

        BoardSpace[34].SpaceNumber = 34;
        BoardSpace[34].SpaceName = "Pennsylvania Avenue";
        BoardSpace[34].SpaceAction = 'P'; 
        BoardSpace[34].SpaceCount = 0;

        BoardSpace[35].SpaceNumber = 35;
        BoardSpace[35].SpaceName = "Short Line Railroad";
        BoardSpace[35].SpaceAction = 'R'; 
        BoardSpace[35].SpaceCount = 0;

        BoardSpace[36].SpaceNumber = 36;
        BoardSpace[36].SpaceName = "Chance";
        BoardSpace[36].SpaceAction = 'H'; 
        BoardSpace[36].SpaceCount = 0;

        BoardSpace[37].SpaceNumber = 37;
        BoardSpace[37].SpaceName = "Park Place";
        BoardSpace[37].SpaceAction = 'P'; 
        BoardSpace[37].SpaceCount = 0;

        BoardSpace[38].SpaceNumber = 38;
        BoardSpace[38].SpaceName = "Luxury Tax";
        BoardSpace[38].SpaceAction = 'T'; 
        BoardSpace[38].SpaceCount = 0;

        BoardSpace[39].SpaceNumber = 39;
        BoardSpace[39].SpaceName = "Boardwalk";
        BoardSpace[39].SpaceAction = 'P'; 
        BoardSpace[39].SpaceCount = 0;
    }


    // Track virtual marker around board (IF handles wrapping around GO)
    void moveSpaces(int& currentPosition, int spaces2Move) {
        currentPosition += spaces2Move;
        if (currentPosition >= 40) {
            currentPosition %= 40;
        }
    }


    void specialMovement(int& currentPosition) {
        int action;
        int movement = 0;

        if (BoardSpace[currentPosition].SpaceAction == 'J') {
            currentPosition = 10;
        } else if (BoardSpace[currentPosition].SpaceAction == '?') {
            action = cardDecks.DrawCard('?');
            if (action <= 99) {
                currentPosition = action;
            } else if (action == 101) {
                // Logic for moving to the nearest utility
                if (currentPosition < 12 || currentPosition >= 28) {
                    currentPosition = 12;  // Move to Electric Company
                } else {
                    currentPosition = 28;  // Move to Water Works
                }
            } else if (action == 102) {
                // Logic for moving to the nearest railroad
                if (currentPosition < 5 || (currentPosition >= 15 && currentPosition < 25) || currentPosition >= 35) {
                    currentPosition = 5;  // Move to Reading Railroad
                } else if (currentPosition < 15) {
                    currentPosition = 15;  // Move to Pennsylvania Railroad
                } else if (currentPosition < 25) {
                    currentPosition = 25;  // Move to B&O Railroad
                } else {
                    currentPosition = 35;  // Move to Short Line Railroad
                }
            } else if (action == 103) {
                // Logic for move back three spaces chance card
                currentPosition -= 3;
            }

            moveSpaces(currentPosition, movement);
        } else if (BoardSpace[currentPosition].SpaceAction == 'C') {
            action = cardDecks.DrawCard('C');
            currentPosition = action;
            moveSpaces(currentPosition, movement);
        }
    }


    int& getSpaceCountRef(int spaceNumber) {
        return BoardSpace[spaceNumber].SpaceCount;
    }


    string getSpaceName(int spaceNumber) {
        return BoardSpace[spaceNumber].SpaceName;
    }
};


// Class for handling dice rolling
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


// Logic for tallying spaces landed on and displaying the results
// FIXME: Time permitting do optional task of sorting results
class GameStatistics {
public:
    void TallySpace(Board& board, int& currentPosition) {
        board.getSpaceCountRef(currentPosition)++;
    }    

    void PrintResults(Board& board){
        cout << setw(25) << left << "Space Name" << setw(10) << right << "Count" << endl;
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
        board.specialMovement(currentPosition);
    }

    gameStatistics.PrintResults(board);

    cout << "\nEnd Program\n" << endl;
    return 0;
};