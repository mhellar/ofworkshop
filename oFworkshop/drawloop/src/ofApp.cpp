#include "ofApp.h"

// Why are we putting the variables up here???
int radius = 100;
int xPos;
int yPos;
int speed = 5;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("Pacman");
    ofSetFrameRate(60);
    ofSetWindowShape(1500, 200);
    ofSetCircleResolution(50);
    
    
    
    // And why are we assigning them values here?
    xPos = -radius;
    yPos = ofGetHeight() / 2.0;
}

//--------------------------------------------------------------
void ofApp::update(){
    // Add speed to xPos every frame
    xPos = xPos + speed;
    //If the circles radius plus the width of the window is greater than xPos reset xPos to -radius(-100)
    if(xPos > ofGetWidth() + radius) {
        xPos = -radius;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    //What do you think this does?
    ofBackgroundGradient(ofColor::gray, ofColor::violet);
    //In addtion to RGB, Hex and HSV there are predefined colors http://openframeworks.cc/documentation/types/ofColor/
    ofSetColor(ofColor::mediumBlue);
    //redraw xPos evey frame
    ofDrawCircle(xPos, yPos, radius);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
