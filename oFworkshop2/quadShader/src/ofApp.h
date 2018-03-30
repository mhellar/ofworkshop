#pragma once

#include "ofMain.h"
#include "ofxQuadWarp.h"
#include "ofxShadertoy.h"

class ofApp : public ofBaseApp {
    
public:
		
    void setup();
    void update();
    void draw();
    void exit();

    void keyPressed(int key);


    ofxQuadWarp warper;
    ofxShadertoy shadertoy;
    ofFbo fbo;
        ofPoint points[10];

};
