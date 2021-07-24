// virtual cricket Application.
#include<limits>
#include "Game.h"
using namespace std;

int main() {
    
    Game game;
     
     game.welcome();
     
     cout << "\n\n\t\t\t\tPree enter to see the pool of 11 players...";
     getchar();
     
     game.displayPoolPlayers();
     
     cout << "\n\n\t\t\t\tPree enter to create the two teams...";
     getchar();
     
     game.createTeams();
     
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
     
     cout << "\n\n\t\t\t\tPress enter to see the created teams...\n";
     getchar();
     
     game.showTeams();
     
     cout << "\n\n\t\t\t\tPress enter to toss...\n";
     getchar();
     
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
     
     game.toss();
     
     cout << "\n\n\t\t\t\tPress enter to start first innings...\n";
     getchar();
     
     game.startFirstInnings();
     
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
     
     cout << "\n\n\t\t\t\tPress enter to start second innings...\n";
     getchar();
     
     game.startSecondInnings();
     
     cout << "\n\n\t\t\t\tPress enter to see match summary...\n";
     getchar();
     
     game.showMatchSummary();
    return 0;
}