#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(24);
    ofSetWindowShape(640, 100);
    ofBackgroundHex(0xEFDC9E);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // Loop 1 - blue
    ofFill();
    ofSetColor(24, 58, 117);
    for(int i=0; i<32; i++)
    {
        ofDrawCircle(20+i*20, 10, 10);
    }
    
    
    // Loop 2 - green
    ofSetColor(23, 142, 39);
    //ofGetWidth() returns the width of the app window
    for(int x=10; x<ofGetWidth(); x+=20)
    {
    //ofGetHeight() returns the width of the app window
        ofDrawCircle(x, ofGetHeight()-20, 10);
    }
    

    
    
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
