//
// Created by arsal on 25/05/2019.
//

#include "game.h"

int Game::read_input() {
    std::cout << "Player " << current_player_index << ", enter 1-9" << std::endl;
    int index;
    std::cin >> index;
    index = index - 1;

    if (0 <= index && index <= 8) {
        if(grid.get_element(index) != "-"){
            std::cout << "That slot is already taken" << std::endl;
            return 0;
        } else{
            grid.add_element(get_token_string(), index);
            grid.print_grid();
            return 1;
        }
    }
    else{
        std::cout << "You entered an incorrect value" << std::endl;
        return 0;
    }
}

Game::Game() {
    std::cout << "Welcome to Tic-Tac-Toe" << std::endl;
    while(game_running){
        int move_made = read_input();
        check_win_condition();

        if(move_made){
            if (current_player_index == 1) {
                current_player_index++;
            } else {
                current_player_index--;
            }
        }
    }
}

string Game::get_token_string() {
    if (current_player_index == 1){
        return "x";
    } else{
        return "o";
    }
}

void Game::check_win_condition() {
    string s = get_token_string();
    for (auto indices : winning_indices) {
        if(! game_running){
            break;
        }

        int index_0 = *indices;
        int index_1 = *(indices+1);
        int index_2 = *(indices+2);

        if(grid.get_element(index_0) == s){
            if(grid.get_element(index_1) == s){
                if(grid.get_element(index_2) == s){
                    game_over();
                }
            }
        }
    }

}

void Game::game_over() {
    game_running = 0;
    std::cout << "Player " << current_player_index<< " won !" << std::endl;
}
