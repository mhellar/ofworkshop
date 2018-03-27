#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 0, 0);
    //mouseX and mouseY are built in variables tht hold the mouse position
    ofDrawBitmapString(mouseX, 0, 10);
    ofDrawBitmapString(mouseY, 0, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    //take a screenshot when space is pressed whis willbe located in bin/data
    if(key == ' '){
        ofImage screenShot;
        screenShot.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
        screenShot.saveImage("screenShot.png");
    }
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
