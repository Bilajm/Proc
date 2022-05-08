#include "shift.h"
#include "replace.h"
#include "intreplace.h"
#include <iostream>

using namespace std;

struct text {

    string opentext;
    string ownername;
    text* next;
    text* prev;

    enum key {SHIFT, REPLACE, INTREPLACE};
    key k;
    void* obj;

    text() {};
    ~text() {};
};