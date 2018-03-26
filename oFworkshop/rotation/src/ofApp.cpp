#include "ofApp.h"

#define HALF_WIDTH (ofGetWidth()/2.0)
#define HALF_HEIGHT (ofGetHeight()/2.0)

float degrees = 0;
float speed = 1;


//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1024, 768);
    ofSetWindowTitle("rotate");
    ofSetFrameRate(60);
    ofBackground(255, 255, 255);
    ofEnableSmoothing();
    ofSetCircleResolution(40);
}

//--------------------------------------------------------------
void ofApp::update(){
    speed = ofMap(mouseY, 0, ofGetHeight(), -10, 10);
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(0);
    
    ofPushMatrix();
    //place the rectangle in the center of the window
    ofTranslate(HALF_WIDTH, HALF_HEIGHT);
    //rotate on the z axis
    ofRotateZ(degrees);
    ofDrawRectangle(-100, -100, 200, 200);
    ofPopMatrix();
    
    //+= operator adds the right value to to the total of the left variable
    degrees+=speed;
    
    ofDrawBitmapString(mouseY, 0, 10);
    ofDrawBitmapString(speed, 0, 20);
    
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
