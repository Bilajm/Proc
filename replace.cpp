#include "replace.h"

string transform(string &otext, vector<pair<char, char>> A) {

    string rtext = "";
    int strsize = otext.length();

    for (int i = 0; i < strsize; i++) {
        bool chektoup = false;
        bool cheknovec = true;

        if (isalpha(otext[i]) == false) {
            rtext.push_back(otext[i]);
            continue;
        }
        if (isupper(otext[i]) == true) {
            chektoup = true;
            otext[i] = tolower(otext[i]);
        }
        for (auto & j : A) {
            if (otext[i] == j.first) {
                if (chektoup) {
                    rtext.push_back(toupper(j.second));
                } else {
                    rtext.push_back(j.second);
                }
                cheknovec = false;
                continue;
            }
        }
        if (chektoup && cheknovec) {
            rtext.push_back(toupper(otext[i]));
        } else if (!chektoup && cheknovec) {
            rtext.push_back(otext[i]);
        }
    }
    return rtext;
}

replace* Inreplace(string &otext, ifstream &ifst) {

    replace *r = new replace;
    string a1;
    string a2;
    getline(ifst, a1);
    getline(ifst, a2);

    r->AA.resize(a1.size());
    for (int j = 0; j <= a1.length(); j++) {
        r->AA[j] = make_pair(a1[j], a2[j]);
    }
    r->repltext = transform(otext, r->AA);
    return r;
}

void Out(replace *r, ofstream &ofst) {
    ofst << "Starting characters: ";

    for (auto & i : r->AA) {
        ofst << i.first << ' ';
    }
    ofst << endl << "End symbols:         ";

    for (auto & i : r->AA) {
        ofst << i.second << ' ';
    }
    ofst << endl << "Output text: " << r->repltext << endl;
}