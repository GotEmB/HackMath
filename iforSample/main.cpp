//
//  main.cpp
//  iforSample
//
//  Created by Gautham Badhrinathan on 10/12/11.
//  Copyright 2011 Code Kangaroos. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

<<<<<<< HEAD
int min = -1;

struct coord
{
    int x;
    int y;
};

void medwork(int w, int h)
{
    
=======
int spath = -1, npath = 0;
int w, h;

void smallwork(int pd[], int x, int y)
{
    if (x == w && y == h)
    {
        
    }
>>>>>>> blah edit in macbook
}

void bigwork()
{
    int n;
    cin >> w >> h >> n;
    
    vector<coord> crew;
    for (int i = 0; i < n; i++)
    {
        coord t;
        cin >> t.x >> t.y;
        
    }
}

void dowork()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        bigwork();
}

int main (int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

