#ifndef REPLACE_H
#define REPLACE_H


#include <fstream>
#include <vector>
#include <utility>

using namespace std;

struct replace {
    vector<pair<char, char>> AA;
    string repltext;

    replace() {};
    ~replace() {};
};

#endif