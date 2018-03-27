#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//using ofLog to write data to the console http://openframeworks.cc/documentation/utils/ofLog/

ofLog(OF_LOG_NOTICE, "the number is " + ofToString(sum(5,12)));
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //call function with no arguments defined
    twoCircles();
    
    //call funtion with arguments
    killerFunctionArg(200,200,80);
    
    //Function with a for loop
    for(int i = 0; i< ofGetWidth(); i+= 60){
        killerFunctionArg(i,300,40);
    }
    
}

//--------------------------------------------------------------
void ofApp::twoCircles(){
    ofDrawCircle(40, 20, 20);
    ofDrawCircle(80, 90, 40);
}

//--------------------------------------------------------------
void ofApp::killerFunctionArg(int x, int y, int r){
    ofPushStyle();
    ofSetColor(255,0,0);
    ofDrawCircle(x, y, r + 5);
    ofSetColor(255,128,0);
    ofDrawCircle(x, y, r);
    ofPopStyle();
}

//--------------------------------------------------------------
int ofApp::sum(int a, int b){
    int s = a + b;
    return s;
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
