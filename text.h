#include "shift.h"
#include "replace.h"
#include "intreplace.h"

using namespace std;

struct text {

    string opentext;
    text* next;
    text* prev;

    enum key {SHIFT, REPLACE, INTREPLACE};
    key k;
    void* obj;

    text() {};
    ~text() {};
};