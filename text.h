#include "shift.h"
#include "replace.h"
#include <fstream>

using namespace std;

struct text {

    string opentext;
    string ownername;
    text* next;
    text* prev;

    enum key {SHIFT, REPLACE};
    key k;
    void* obj;

    text() {};
    ~text() {};
};