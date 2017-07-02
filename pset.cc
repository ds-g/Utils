#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    string pde, pdeout;
    cout << "Enter sketch name: ";
    cin >> pde;
    pdeout = pde + "/out";
    system(("mkdir " + pde + " " + pdeout).c_str());
    system(("echo "" > " + pde + ".pde").c_str());
    system(("mv " + pde + ".pde" " " + pde).c_str());
    system(("processing-java --sketch=" + pde + " --output=" + pdeout).c_str());
    return 0;
}