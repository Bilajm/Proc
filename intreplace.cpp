#include "intreplace.h"

vector<int> transform(string otext, vector<pair<char, int>> A) {

    vector<int> itext;
    for (char i : otext) {
        bool cheknovec = true;
        for (auto & j : A) {
            if (tolower(i) == j.first) {
                itext.push_back(j.second);
                cheknovec = false;
                continue;
            }
        }
        if (cheknovec) {
            itext.push_back(i);
        }
    }
    return itext;
}

intreplace* Inintrep(string &otext, ifstream &ifst) {

    intreplace *ir = new intreplace;
    string a1;
    vector<int> a2;
    getline(ifst, a1);

    int x = a1.length() - (a1.length() - 1)/ 2;
    for (int j = 0; j < x; j++) {
        int t;
        ifst >> t;
        ir->AX.emplace_back(make_pair(a1[j * 2], t));
    }
    ir->inttext = transform(otext, ir->AX);
    return ir;

}

void Out(intreplace *ir, ofstream &ofst) {
    ofst << "Starting characters: ";

    for (auto & i : ir->AX) {
        ofst << i.first << ' ';
    }
    ofst << endl << "End symbols:         ";

    for (auto & i : ir->AX) {
        ofst << i.second << ' ';
    }
    ofst << endl << "Output text: ";
    for (auto i : ir->inttext) {
        ofst << i << " ";
    }
    ofst << endl;
}

