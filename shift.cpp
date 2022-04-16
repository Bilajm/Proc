#include "shift.h"
#include <fstream>
#include <cstring>

string transform(string &otext, int shift) {

    string fotext = otext;
    string stext = "";
    string eng_alph = "abcdefghijklnmopqrstuvwxyz";
    int strsize = otext.length();
    int alpsize = eng_alph.length();

    for (int i = 0; i < strsize; i++) {
        bool chektoup = false;
        int pos;
        if (eng_alph.find(tolower(fotext[i])) == string::npos) {
            stext.push_back(fotext[i]);
            continue;
        }
        if (isupper(fotext[i]) == true) {
            chektoup = true;
            fotext[i] = tolower(fotext[i]);
        }
        pos = (eng_alph.find(fotext[i]) + shift) % alpsize;

        if (chektoup == true) {
            stext.push_back(toupper(eng_alph[pos]));

        } else {
            stext.push_back(eng_alph[pos]);
        }
    }
    return stext;
}

shift* Inshift(string &otext, ifstream &ifst) {

    shift *s = new shift;
    ifst >> s->shiftchar;
    string stext = transform(otext, s->shiftchar);
    //strcpy(s->shifttext, stext.c_str());
    s->shifttext = stext;
    return s;
}

void Out(shift *s ,ofstream &ofst) {

    ofst << "Shift: " << s->shiftchar << endl
         << "Output text: " << s->shifttext << endl;
}

