#include "text.h"
#include <fstream>

using namespace std;

struct text;

struct container {
    text *head;
    text *tail;
    int len;
};
