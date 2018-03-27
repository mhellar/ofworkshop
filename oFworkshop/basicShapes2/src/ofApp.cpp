#include "ofApp.h"

//--------------------------------------------------------------
// Setup runs once
void ofApp::setup(){
//set the background color in RGB
ofBackground(255,255,255);

// Set the window title
ofSetWindowTitle("Basic Shapes 2");
    
//Set the framerate of the given argument, in this case 60FPS
ofSetFrameRate(60);

}

//--------------------------------------------------------------
//Update runs every frame before anything is drawn on the screen
void ofApp::update(){

}

//--------------------------------------------------------------
//Draw runs every frame and redering to the screen happen here
void ofApp::draw(){

ofSetColor(0,255,0);
ofDrawRectangle(200, 100, 100, 100); //draw a rect

ofFill();

// http://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofPushMatrix
    
ofPushMatrix();            // push the current coordinate position
    ofRotateZ(45);         // change the coordinate system
    ofDrawRectangle(200,50,100,100);    // draw a rect
ofPopMatrix();             // recall the pushed coordinate position
    

    
// http://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofPushStyle
    
ofPushStyle();  // push the current style for use later
    ofNoFill();
    ofSetColor(255,0,0);
    ofDrawEllipse(400,50,100,100);
ofPopStyle();   // recall the pushed style
    
ofDrawEllipse(400,150,100,100);
    
//Graphics reference http://openframeworks.cc/documentation/graphics/ofGraphics
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
