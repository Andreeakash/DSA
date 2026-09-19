#include<bits/stdc++.h>
using namespace std;
// 1401. Circle and Rectangle Overlapping
class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        // finding nearest point
        int Xi;
        int Yi;

        // Finding x coordinates
        if(x1 > xCenter){
            Xi=x1;
        }
        else if(x2 < xCenter){
            Xi=x2;
        }
        else{
            Xi=xCenter;
        }

        // finding Y coordinates
        if(y1 > yCenter){
            Yi=y1;
        }
        else if( y2 < yCenter){
            Yi=y2;
        }
        else{
            Yi=yCenter;
        }

        // finding distance

        int distance = sqrt((Xi-xCenter)*(Xi-xCenter) +(Yi-yCenter) *(Yi-yCenter) );
        // checking overlapping
        if(distance<=radius){
            return true;
        }
        else{
            return false;
        }


        
    }
};