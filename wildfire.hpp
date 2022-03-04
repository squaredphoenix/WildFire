#ifndef WILDFIRE_H
#define WILDFIRE_H
#include <iostream>
#include <sstream>
using namespace std;

class Wildfire
{
    public:
        Wildfire();
        Wildfire(string mapfile);
        ~Wildfire();
        friend std::ostream& operator<<(std::ostream& out, Wildfire const& wf);
        void StartFire(int startX, int startY);
        
        char ** map;
        int x;
        int y;
};

#endif
