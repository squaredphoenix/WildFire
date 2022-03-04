#include <iostream>
#include <fstream>
#include <sstream>
#include "wildfire.hpp"
using namespace std;

Wildfire::Wildfire() //default constructor
{
    x = 5;
    y = 5;

    map = new char*[y];

    for(int i = 0; i < y; i++)
    {
        map[i] = new char[x];
    }

    for(int j = 0; j < y; j++)
    {
        for(int k = 0; k < x; k++)
        {
            map[j][k] = 'T';
        }
    }
}

Wildfire::Wildfire(string mapfile)
{
    ifstream iFile;
    iFile.open(mapfile);

    iFile >> y; // 5
    iFile >> x; // 4

    map = new char*[y];

    for(int i = 0; i < y; i++)
    {
        map[i] = new char[x];
    }

    for(int n = 0; n < y; n++)
    {
        for(int o = 0; o < x; o++)
        {
            iFile >> map[n][o];
        }
    }

    iFile.close();
}

Wildfire::~Wildfire()
{   
    delete[] map;
}

std::ostream& operator<<(std::ostream& out, Wildfire const& wf)
{
    for(int l = 0; l < wf.y; l++)
    {
        for(int m = 0; m < wf.x; m++)
        {
            out << wf.map[l][m] << ' ';
        }

        out << '\n';
    }

    return out;
}

void Wildfire::StartFire(int startY, int startX) //x = 4, y = 5
{
    if(startX >= 0 && startX < x && startY >= 0 && startY < y )
    {
        if(map[startY][startX] == 'T')
        {
            map[startY][startX] = 'F';

            if((startX + 1) >= 0 && (startX + 1) < x && startY >= 0 && startY < y && map[startY][startX + 1] == 'T') // right
            {
                return StartFire(startY, (startX + 1));
            }

            if((startX - 1) >= 0 && (startX - 1) < x && startY >= 0 && startY < y && map[startY][startX - 1] == 'T') // left
            {
                return StartFire(startY, (startX - 1));
            }

            if(startX >= 0 && startX < x && (startY + 1) >= 0 && (startY + 1) < y && map[startY + 1][startX] == 'T') // down
            {
                return StartFire((startY + 1), startX);
            }

            if(startX >= 0 && startX < x && (startY - 1) >= 0 && (startY - 1) < y && map[startY - 1][startX] == 'T') // up
            {
                return StartFire((startY - 1), startX);
            }
        }
    }

    return;
}