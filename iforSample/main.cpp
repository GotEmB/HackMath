//
//  main.cpp
//  iforSample
//
//  Created by Gautham Badhrinathan on 10/12/11.
//  Copyright 2011 Code Kangaroos. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class coord
{
public:
    int x;
    int y;
    
    int operator == (const coord& that)
    {
        return x == that.x && y == that.y;
    }
};

unsigned long spath = -1, npath = 0;
int w, h;
vector<coord> crew;

void medwork(vector<coord> pd)
{
    //for (vector<coord>::iterator i = pd.begin(); i < pd.end(); i++)
        //cerr << "(" << i->x << ", " << i->y << ") -> ";
    //cerr << endl;
    if (pd.size() == 0)
    {
        medwork(vector<coord>(1, (coord){0, 0}));
        return;
    }
    
    if (find(crew.begin(), crew.end(), pd.back()) != crew.end() || find(pd.begin(), pd.end(), pd.back()) != pd.end() - 1);
    else if (pd.back().x == w - 1 && pd.back().y == h - 1)
    {
        if (pd.size() > spath && spath != -1);
        else if (pd.size() == spath)
            npath += 1;
        else if (pd.size() < spath || spath == -1)
        {
            spath = pd.size();
            npath = 1;
        }
    }
    else if (pd.back().x < 0 || pd.back().y < 0 || pd.back().x >= w || pd.back().y >= h);
    else
    {
        vector<coord> q1 = vector<coord>(pd), q2 = vector<coord>(pd), q3 = vector<coord>(pd), q4 = vector<coord>(pd);
        q1.push_back((coord){pd.back().x, pd.back().y - 1});
        medwork(q1);
        q2.push_back((coord){pd.back().x, pd.back().y + 1});
        medwork(q2);
        q3.push_back((coord){pd.back().x - 1, pd.back().y});
        medwork(q3);
        q4.push_back((coord){pd.back().x + 1, pd.back().y});
        medwork(q4);
    }

}

void bigwork()
{
    int n;
    cin >> w >> h >> n;
    w++;
    h++;
    for (int i = 0; i < n; i++)
    {
        coord t;
        cin >> t.x >> t.y;
        crew.push_back(t);
    }
    medwork(vector<coord>());
    cout << npath << endl;
}

void dowork()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        bigwork();
        crew.clear();
        spath = -1;
        npath = 0;
    }
}

int main (int argc, const char * argv[])
{
    dowork();
    return 0;
}

