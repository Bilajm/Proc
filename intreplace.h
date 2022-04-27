#ifndef PROC_INTREPLACE_H
#define PROC_INTREPLACE_H
#include <fstream>
#include <vector>
#include <utility>

using namespace std;

struct intreplace {
    vector<pair<char, int>> AX;
    vector<int> inttext;

    intreplace() {};
    ~intreplace() {};
};

#endif //PROC_INTREPLACE_H
