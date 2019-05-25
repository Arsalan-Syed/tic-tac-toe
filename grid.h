//
// Created by arsal on 25/05/2019.
//

#include <iostream>
#include <string>

using namespace std;

class Grid {

public:
    Grid();
    void print_grid();
    void add_element(string c, int index);
    string get_element(int index);

private:
    string slots[9];
};


