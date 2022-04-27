#include "container.h"

text* In(ifstream &ifst);
void Out(text &t, ofstream &ofst);

void Init(container &c) {c.len = 0; }

int long long Lenotext(string &otext);

void In(container &c, ifstream &ifst) {
    while (!ifst.eof()) {
        text *t;
        if ((t = In(ifst)) != nullptr) {
            if (c.len == 0) {
                c.head = t;
                c.tail = t;
                c.len++;
                c.head->prev = nullptr;
            } else {
                c.tail->next = t;
                t->prev = c.tail;
                c.tail = t;
                c.len++;
            }
        }
        c.tail->next = nullptr;
    }
}

void Out(container &c, ofstream &ofst) {
    text *t;
    t = c.head;
    ofst << "Container " << c.len << " elements." << endl << endl;
    for(int i = 0; i < c.len; i++) {
        ofst << i << ": ";
        Out(*(t), ofst);
        t = t->next;
        ofst << endl;
    }
}

void Outlen(container &c, ofstream &ofst) {
    text *t;
    t = c.head;
    ofst << "Container " << c.len << " elements." << endl << endl;
    for(int i = 0; i < c.len; i++) {
        ofst << i << ": ";
        Out(*(t), ofst);
        int long long len = Lenotext(t->opentext);
        ofst << "Message length: "
             << len << endl;
        t = t->next;
        ofst << endl;
    }
}

void Clear(container &c) {

    while (c.head) {
        c.tail = c.head;
        c.head = c.head->next;
        delete c.tail;
    }
     c.len = 0;
    c.tail = nullptr;
}