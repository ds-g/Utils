#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    string pde, pdeout, opt;
    int x;
    int w = 0;
    for (;;)
    { 
        cout << "Enter sketch name: ";
        cin >> pde;
        pdeout = pde + "/out";
        while (w == 0)
        {
            cout << "Options, enter option's number..\n1. Build\n2. Run\n3. Present\n4. Export\n5. EXIT\n::";
            cin >> x;
            switch (x)
            {
                case 1 : opt = "build";
                         w = 1;
                         break;
                case 2 : opt = "run";
                         w = 1;
                         break;
                case 3 : opt = "present";
                         w = 1;
                         break;
                case 4 : opt = "export";
                         w = 1;
                         break;
                case 5 : return 0;
                         break;
                default: cout << "Wrong input.\n";
                         return 0;
                         break;
            }
        }
        system(("processing-java --sketch=" + pde + " --output=" + pdeout + " --force" "  --" + opt).c_str());  
        return 0;
    }
}