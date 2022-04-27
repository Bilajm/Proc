#include <iostream>
#include "container.h"

using namespace std;

void Init(container &c);
void Clear(container &c);
void In(container &c, ifstream &ifst);
void Out(container &c, ofstream &ofst);
void Outlen(container &c, ofstream &ofst);
void Sort(container &c);

int main(/*int argc, char* argv[]*/) {
    /*
    if(argc !=3) {
        cout << "incorrect command line! " "Waited: command in_file out_file"
             << endl;
        exit(1);
    }
    ifstream ifst(argv[1]);
    ofstream ofst(argv[2]);
    */
    ifstream ifst(R"(D:\Study\ProgrammTehnology\Lab1\Proc\In.txt)");
    ofstream ofst(R"(D:\Study\ProgrammTehnology\Lab1\Proc\Out.txt)");

    cout << "Start"<< endl;
    container c;
    Init(c);
    cout << "Init" << endl;
    In(c, ifst);
    ofst << "Filled container. " << endl;
    Out(c, ofst);
    Sort(c);
    Outlen(c, ofst);
    Clear(c);
    ofst << "Empty container. " << endl;
    Out(c, ofst);
    cout << "Stop"<< endl;
    return 0;
}
