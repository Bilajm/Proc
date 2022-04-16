#include "shift.h"
#include "replace.h"
#include <fstream>

using namespace std;

struct text {

    string opentext;
    text* next;
    text* prev;

    enum key {SHIFT, REPLACE};
    key k;
    void* obj;
    /*//struct {
        shift s;
        replace r;
    //};*/

    text() {};
    ~text() {};
};