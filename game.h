//
// Created by arsal on 25/05/2019.
//

#include "grid.h"

class Game{

public:
    Game();
    int read_input();
    string get_token_string();
    void check_win_condition();
    void game_over();

private:
    int current_player_index = 1;
    int game_running = 1;
    Grid grid;
    int winning_indices[8][3] = {
            {0,3,6},
            {1,4,7},
            {2,5,8},
            {0,1,2},
            {3,4,5},
            {6,7,8},
            {0,4,8},
            {2,4,6}
    };
};