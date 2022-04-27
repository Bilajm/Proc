#include "container.h"

text* In(ifstream &ifst);
void Out(text &t, ofstream &ofst);
bool Compare(text *first, text *second);

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

void Sort(container &c) {
    for (int i = 0; i < c.len; i++) {
        text *iter = c.head;
        while (iter != c.tail) {
            if (Compare(iter, iter->next)) {
                text *tmp = iter->next;
                if (iter->prev == nullptr) {
                    tmp->next->prev = iter;
                    tmp->prev = iter->prev;
                    iter->next = tmp->next;
                    tmp->next = iter;
                    iter->prev = tmp;
                    c.head = tmp;
                } else if (tmp->next == nullptr) {
                    iter->prev->next = tmp;
                    tmp->prev = iter->prev;
                    iter->next = tmp->next;
                    tmp->next = iter;
                    iter->prev = tmp;
                    c.tail = iter;
                } else {
                    iter->prev->next = tmp;
                    tmp->next->prev = iter;
                    tmp->prev = iter->prev;
                    iter->next = tmp->next;
                    tmp->next = iter;
                    iter->prev = tmp;
                }
            }
            if (iter != c.tail)
                iter = iter->next;
        }
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