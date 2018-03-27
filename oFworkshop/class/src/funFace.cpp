//
//  funFace.cpp
//  class
//
//  Created by mark hellar on 3/25/18.
//

//include header file here
#include "funFace.h"

//setup function for class
void funFace::setup(){
    ofSetCircleResolution(100);
}

//draw function for class
//you can define arguments to pass to a function here int x and y also declare in the header file for your class
void funFace::draw(int x, int y){
    
    color = ofColor( ofRandom(0, 255),
                    ofRandom(0, 255),
                    ofRandom(0, 255)
                    );
    ofPushMatrix();
    ofTranslate(x,y);//using the arguments for initial placement
    ofSetColor(255,0,0);
    ofDrawCircle(15,15,24);
    //eyes
    ofSetColor(color);
    
    ofDrawCircle(5,10,4);
    ofDrawCircle(20,10,4);
    //nose
    ofSetColor(color);
    ofDrawCircle(12,20,2);
    //mouth
    ofSetLineWidth(5);
    ofSetColor(color);
    ofDrawLine(2, 30, 22, 30);
    ofPopMatrix();
}
