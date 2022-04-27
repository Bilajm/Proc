#include "text.h"

shift* Inshift(string &otext, ifstream &ifst);
replace* Inreplace(string &otext, ifstream &ifst);
intreplace* Inintrep(string &otext, ifstream &ifst);

void Out(shift *s, ofstream &ofst);
void Out(replace *r, ofstream &ofst);
void Out(intreplace *ir, ofstream &ofst);

int long long Lenotext(string &otext) {
    return otext.length();
}

bool Compare(text *first, text *second) {
    return Lenotext(first->opentext) < Lenotext(second->opentext);
}

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
            break;
        case 2:
            sp = new text;
            sp->k = text::key::REPLACE;
            getline(ifst, otext);
            sp->opentext = otext;
            sp->obj = (void*)Inreplace(otext, ifst);
            break;
        case 3:
            sp = new text;
            sp->k = text::key::INTREPLACE;
            getline(ifst, otext);
            sp->opentext = otext;
            sp->obj = (void*)Inintrep(otext, ifst);
            break;
        default:
            return nullptr;
    }
    return sp;
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
        case text::key::INTREPLACE:
            ofst << "Input text: " << t.opentext << endl;
            Out((intreplace*)t.obj, ofst);
            break;
        default:
            ofst << "Incorrect figure!" << endl;
            break;
    }
}

