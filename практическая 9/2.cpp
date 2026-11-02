#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in1("input1.txt"), in2("input2.txt");
    ofstream out("output.txt");

    string x, y;
    in1 >> x;
    in2 >> y;

    if (y.find(x) != string::npos)
        out << "yes";
    else
        out << "no";
    return 0;
}