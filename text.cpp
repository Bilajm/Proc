#include "text.h"


shift* Inshift(string &otext, ifstream &ifst);
replace* Inreplace(string &otext, ifstream &ifst);

void Out(shift *s, ofstream &ofst);
void Out(replace *r, ofstream &ofst);

text* In(ifstream &ifst) {

    text *sp;
    int k;
    ifst >> k;
    string otext;
    switch (k) {
        case 1:
            sp = new text;
            sp->k = text::key::SHIFT;
            getline(ifst, otext);
            sp->opentext = otext;
            sp->obj = (void*)Inshift(otext, ifst);
            return sp;
        case 2:
            sp = new text;
            sp->k = text::key::REPLACE;
            getline(ifst, otext);
            sp->opentext = otext;
            sp->obj = (void*)Inreplace(otext, ifst);
            return sp;
        default:
            return nullptr;

    }
}

void Out(text &t, ofstream &ofst) {
    switch(t.k) {
        case text::key::SHIFT:
            ofst << "Input text: " << t.opentext << endl;
            Out((shift*)t.obj, ofst);
            break;
        case text::key::REPLACE:
            ofst << "Input text: " << t.opentext << endl;
            Out((replace*)t.obj, ofst);
            break;
        default:
            ofst << "Incorrect figure!" << endl;
            break;
    }
}

