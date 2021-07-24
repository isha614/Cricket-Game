#include "Team.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include<limits>

class Game {
    
    public:
        Game();
        Team teamA, teamB;
        Team *battingTeam;
        Team *bowlingTeam;
        Player *batsman;
        Player *bowler;
        bool isFirstInnings;
        int playersPerTeam;
        int maxBalls;
        int totalPlayers;
        std :: string player[11];
        
        void welcome();
        void displayPoolPlayers();
        int takeIntegerOnly();
        void createTeams();
        bool validatingPlayers(int);
        void showTeams();
        void toss();
        void tossChoices(Team);
        void startFirstInnings();
        void initializingPlayers();
        void playInnings();
        void showScoreCard();
        void bat();
        bool validateInnings();
        void startSecondInnings();
        void showMatchSummary();
};