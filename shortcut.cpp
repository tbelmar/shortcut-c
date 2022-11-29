#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main(int argc, char *argv[])
{
    map<string, int> args = {
        {"help", -1},
        {"create", -1},
        {"delete", -1},
        {"modify", -1},
        {"list", -1},
    };

    map<string, int>::iterator it = args.begin();

    for (int i = 1; i < argc; i++)
    {
        if ((args.find(argv[i])->second) < 0)
        {
            args[argv[i]] = 1;
        };
    }

    while (it != args.end())
    {
        if (it->second > 0)
        {
            cout << it->first << "\n";
        }

        it++;
    }

    return 0;
}
