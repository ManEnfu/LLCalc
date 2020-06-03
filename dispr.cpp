#include <fstream>
#include <iostream>

using namespace std;

void indent(ofstream& f, int x) {
    for (int i = 0; i < x; i++) {
        f << "    ";
    }
}

void foo(ofstream& f, int bit, int idnt, int& val) {
    indent(f, idnt);
    f << "reg.bit" << bit << " ? ( \\" << endl;
    if (bit == 1) {
        indent(f, idnt + 1);
        f << val << " \\" << endl;
        val--;
    } else {
        foo(f, bit - 1, idnt + 1, val);
    }
    indent(f, idnt);
    f << ") : ( \\" << endl;
    if (bit == 1) {
        indent(f, idnt + 1);
        f << val << " \\" << endl;
        val--;
    } else {
        foo(f, bit - 1, idnt + 1, val);
    }
    indent(f, idnt);
    f << ") \\" << endl;
    

}

int main() {

    ofstream f;
    f.open("src/dispr.h");
    f << "#define dispr(reg) \\" << endl;
    f << "    printf(\"%d\", \\" << endl;

    int i = 255;
    foo(f, 8, 2, i); 
    
    f << "    )" << endl;
    f.close();

}


