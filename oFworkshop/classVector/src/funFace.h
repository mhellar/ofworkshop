//
//  funFace.h
//  class
//
//  Created by mark hellar on 3/25/18.
//

#ifndef funFace_h
#define funFace_h

#include "ofMain.h"


class funFace{
public:
    //methods
    void setup();
    //you can define arguments to pass to a function here int x and y also declare in the cpp file for your class
    void setColor();
    
    void draw(int x,int y);
    
    //properties
    ofColor color1;
    ofColor color2;
    ofColor color3;
    ofColor color4;
    
};

#endif /* funFace_h */

