//
//  funFace.h
//  class
//
//  Created by mark hellar on 3/25/18.
//

#ifndef funFace_h
#define funFace_h

#include "ofMain.h"


//declaring a custom class 
class funFace{
public:
    //define functions for you class
    void setup();
    //you can define arguments to pass to a function here int x and y also declare in the cpp file for your class
    void draw(int x,int y);
    //define a variable for my class called color
    ofColor color;

};

#endif /* funFace_h */

