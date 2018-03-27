#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //Do stuff with font here ofTrueTypeFont http://openframeworks.cc/documentation/graphics/ofTrueTypeFont/#show_setLetterSpacing
    myFont.load("Iron.ttf", 60); //first argument is font to load located in bin/data second is font size
    //myFont.setLetterSpacing(4);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(130, 100, 70);
    myFont.drawString("BLAH BLAH BLAH", 300, 300);
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
