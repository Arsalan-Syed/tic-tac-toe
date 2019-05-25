#include <utility>

//
// Created by arsal on 25/05/2019.
//

#include "grid.h"

void Grid::print_grid() {

    for(int i=0;i<9;i++){
        string s = get_element(i);
        std::cout << s << " ";

        if(i % 3 == 2){
            std::cout << std::endl;
        }
    }

}

void Grid::add_element(string c, int index) {
    slots[index] = std::move(c);
}

string Grid::get_element(int index) {
    return slots[index];
}

Grid::Grid() {
    for (auto &slot : slots) {
        slot = "-";
    }
}





