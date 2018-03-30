//
//  myClass.cpp
//  class
//
//  Created by mark hellar on 3/25/18.
//

#include "myClass.h"

void myClass::setup(){
    ofSetCircleResolution(100);
}


//you can define arguments to pass to a function here int x and y also declare in the header file for your class
void myClass::draw(int x, int y){
    color = ofColor( ofRandom(0, 255),
                    ofRandom(0, 255),
                    ofRandom(0, 255)
                    );
    
    ofPushMatrix();
    ofTranslate(x,y);//using the arguments for initial placement
    ofSetColor(color);
    ofDrawCircle(15,15,24);
    ofPopMatrix();
}
    
