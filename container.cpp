#include "container.h"

text* In(ifstream &ifst, int &len);
void Out(text &t, ofstream &ofst);
bool Compare(text *first, text *second);

void Init(container &c) {c.len = 0; }

int long long Lenotext(string &otext);

void In(container &c, ifstream &ifst) {
    while (!ifst.eof()) {
        text *t;
        if ((t = In(ifst, c.len)) != nullptr) {
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

        if (c.head == nullptr) {
            c.tail = nullptr;
        } else {
            c.tail->next = nullptr;
        }
    }
}

void Out(container &c, ofstream &ofst) {
    text *t;
    t = c.head;
    ofst << "Container " << c.len << " elements." << endl << endl;
    for(int i = 0; i < c.len; i++) {
        ofst << i + 1 << ": ";
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
        ofst << i + 1 << ": ";
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

void MultiMetod(container &c, ofstream &ofst) {
    ofst << "Multimetod." << endl;
    text *first = c.head;
    while (first != c.tail) {
        text *second = first;
        do {
            second = second->next;
            switch (first->k) {
                case text::SHIFT:
                    switch (second->k) {
                        case text::SHIFT:
                            ofst << "Shift and Shift" << endl;
                            break;
                        case text::REPLACE:
                            ofst << "Shift and Replace" << endl;
                            break;
                        case text::INTREPLACE:
                            ofst << "Shift and IntReplace" << endl;
                            break;
                        default:
                            ofst << "Unknown type" << endl;
                    }
                    break;
                case text::REPLACE:
                    switch (second->k) {
                        case text::SHIFT:
                            ofst << "Replace and Shift" << endl;
                            break;
                        case text::REPLACE:
                            ofst << "Replace and Replace" << endl;
                            break;
                        case text::INTREPLACE:
                            ofst << "Replace and IntReplace" << endl;
                            break;
                        default:
                            ofst << "Unknown type" << endl;
                    }
                    break;
                case text::INTREPLACE:
                    switch (second->k) {
                        case text::SHIFT:
                            ofst << "IntReplace and Shift" << endl;
                            break;
                        case text::REPLACE:
                            ofst << "IntReplace and Replace" << endl;
                            break;
                        case text::INTREPLACE:
                            ofst << "IntReplace and IntReplace" << endl;
                            break;
                        default:
                            ofst << "Unknown type" << endl;
                    }
                    break;
                default:
                    ofst << "Unknown type" << endl;
            }
            ofst << endl;
            Out(*(first), ofst);
            ofst << endl;
            Out(*(second), ofst);
            ofst << endl;
        } while (second != c.tail);
        first = first->next;
    }
}

void OutRep(container &c, ofstream &ofst) {
    text *t;
    t = c.head;
    ofst << "Only replace." << endl << endl;
    for(int i = 0; i < c.len; i++) {
        ofst << i + 1 << ": ";
        if (t->k == text::REPLACE)
            Out(*(t), ofst);
        else
            ofst << endl;
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