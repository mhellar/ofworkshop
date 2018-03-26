//
//  funFace.cpp
//  class
//
//  Created by mark hellar on 3/25/18.
//

#include "funFace.h"

void funFace::setup(){
    ofSetCircleResolution(100);
}

void funFace::setColor(){
    color1 = ofColor( ofRandom(0, 255),
                    ofRandom(0, 255),
                    ofRandom(0, 255)
                    );
    
    color2 = ofColor( ofRandom(0, 255),
                     ofRandom(0, 255),
                     ofRandom(0, 255)
                     );
    
    color3 = ofColor( ofRandom(0, 255),
                     ofRandom(0, 255),
                     ofRandom(0, 255)
                     );
    color4 = ofColor( ofRandom(0, 255),
                     ofRandom(0, 255),
                     ofRandom(0, 255)
                     );
}


//you can define arguments to pass to a function here int x and y also declare in the header file for your class
void funFace::draw(int x, int y){

    ofPushMatrix();
    ofTranslate(x,y);//using the arguments for initial placement
    ofRotateZ(degrees);
    ofRotateY(degrees);
    ofRotateZ(degrees);
    degrees+=speed;
    
    ofSetColor(color1);
    ofDrawCircle(15,15,24);
    //eyes
    ofSetColor(color2);
    ofDrawCircle(5,10,4);
    ofDrawCircle(20,10,4);
    //nose
    ofSetColor(color3);
    ofDrawCircle(12,20,2);
    //mouth
    ofSetLineWidth(5);
    ofSetColor(color4);
    ofDrawLine(2, 30, 22, 30);
    ofPopMatrix();
}
