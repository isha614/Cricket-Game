#include "Player.h"
#include <vector>

class Team {
    
    public:
        
        Team();
        std :: string teamName;
        int totalRunsScored;
        int wicketsLost;
        int totalBallsBowled;
        std :: vector<Player> players;
};