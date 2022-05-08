#include "text.h"


shift* Inshift(string &otext, ifstream &ifst, int &len);
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

text* In(ifstream &ifst, int &len) {

    text *sp;
    int k;
    ifst >> k;

    if (ifst.fail()) {
        ifst.clear();
        string error;
        getline(ifst, error);
        cout << "Attention! Error reading element " << len + 1 << ". Check the correctness of input elements " << len << " and "<< len + 1 << "." << endl;
        return nullptr;
    }

    string otext;
    switch (k) {
        case 1:
            sp = new text;
            sp->k = text::key::SHIFT;
            getline(ifst, otext);
            sp->opentext = otext;
            sp->obj = (void*)Inshift(otext, ifst, len);
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
    ifst >> sp->ownername;
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
    ofst << "Owner's name: " << t.ownername << endl;
}

