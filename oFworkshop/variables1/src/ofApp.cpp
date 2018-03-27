#include "ofApp.h"

//1. variables have data types
//2. declaring variable here or in the header file give them global scope and they are accessible in all functions

//int whole number
int num = 100;
//float is floating point
float num2 = 12.36;
//boolen is 0 or 1
bool a = 0;
//const cant change its value
const int num4 = 8;
//String is a text message
string msg = "hello";


//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 0, 0);
    int r = 100; //setting a variable in a function make it's scope local to that function
    ofDrawCircle(200,400,num);
    r = 200; //assign new value to r
    ofDrawCircle(400,500,r);
    
    ofDrawBitmapString("hello, you nice person", 300, 100); //ofDrawBitmapString requires a string argument
    string newmsg = ofToString(num); //we can convert a varialbes type, this is called casting
    ofDrawBitmapString("the value of num is " + newmsg, 300, 120);
    
    //mouseX and mouseY are built string variables tht hold the mouse position
    ofDrawBitmapString(mouseX, 0, 10);
    ofDrawBitmapString(mouseY, 0, 20);
    
    //casting the ofGetFrameRate() function
    string info = "fps: " + ofToString(ofGetFrameRate());
    ofDrawBitmapString(info, 10, 40);
    
    
    
    
    
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
