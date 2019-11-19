#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Geef je weblink: ";
    string weblink;
    string weblink1;
    string prot;
    string mach;
    string direc;
    string file;
    cin >> weblink;
    weblink1=weblink;
    string::size_type indexProt = weblink.find(":");
    prot = weblink.substr(0, indexProt);
    weblink.erase(0, indexProt + 3);
    string::size_type indexMach = weblink.find("/");
    mach = weblink.substr(0, indexMach);
    weblink.erase(0, indexMach);
    string::size_type machine = mach.find(".");
    string::size_type indexDirec = weblink.find_last_of("/");
    direc = weblink.substr(0,indexDirec);
    weblink.erase(0,indexDirec +1);
    string::size_type indexFile = weblink.find(".");
    file = weblink;
    if (indexProt != string::npos&&indexFile != string::npos &&machine != string::npos)
    {
        cout << "Protocol:  " << prot << endl;
        cout << "Machine:   " << mach << endl;
        cout << "Directory: " << direc << endl;
        cout << "File:      " << file << endl;
    }
    else
    {
        cout << weblink1 << " is geen geldige weblink!" << endl;
    }
    return 0;
}






/*************************
  Project           : OGP­P1 week1
  File              : file_naam_met_extensie (*.cpp of *.hpp)
  Compiler          : GCC, version 4.8.3
  Revision          : 0.1
  Date              : 2019/11/19
  Author            : Mathias Paul
  Student No.       : 18102735
************************/
