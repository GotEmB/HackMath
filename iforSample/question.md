THE DEWA PROBLEM
================

It's the 1st of the month again, which means it's time for Aditya to pay his bills. Aditya needs to go to the DEWA office to pay  his monthly charge, and wants to take the shortest route possible. Aditya wonders how many different shortest routes he can take.

Aditya lives at the southwest corner of town (0,0) and the DEWA office is at the northeast corner of town (W,H). It takes Aditya exactly one minute to move from (x, y) to (x, y+1), (x, y-1), (x+1, y) or (x-1, y). Aditya cannot move further south or west than his house, nor can he move further north or east than the DEWA office (that is, Aditya’s  x coordinate must stay between 0 and W, and his y coordinate must stay between 0 and H at all times). Additionally, there are N intersections that are being worked on by construction crews, and Aditya must avoid these intersections.

Write a program(in any language) to accept (W,H) and the coordinates of the ‘N’ intersections from Aditya as the inputs and output the number of shortest paths that exist. The number of shortest routes may be very large, so print the result modulo 1000000037. If it is impossible for him to reach the DEWA office print 0.

#Input:
Each input begins with an integer T, the number of test cases. Each test case begins with 3 integers W, H, N. N lines follow, each containing 2 integers (xi, yi), the coordinates of an intersection being worked on by a construction crew. Intersections are guaranteed to be unique, and neither (0,0) nor (W,H) will be under construction. A blank line separates each test case.

#Output:
For each test case, output a line containing the number of shortest paths to the DEWA office, modulo 1000000037.

#Sample input:
3

2 2 1
1 1

1 1 2
0 1
1 0

7 1 2
1 0
4 1

#Sample output:
2
0
6

#Constraints
1<=T<=30
1<=W,H<=107
0<=xi<=W
0<=yi<=H
0<=N<=max(100,min(W,H,1000))