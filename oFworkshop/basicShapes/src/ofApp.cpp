#include "ofApp.h"

//--------------------------------------------------------------
// Setup runs once
void ofApp::setup(){
//set the background color in RGB
ofBackground(255,255,255);

// Set the window title
ofSetWindowTitle("Basic Shapes");
    
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

//Lets draw a circle, first set the color
ofSetColor(255,130,0);
// draw "filled shapes"
ofFill();
//set the resolution of the circle
ofSetCircleResolution(100);
//Draw the circle. First Argument is the X position, Second is the and the third is radius
ofDrawCircle(200,400,80);

//Draw an Ellipse
ofSetColor(255,0,0);
ofDrawEllipse(350,400,50,80);

//Rectangle with no fill
ofSetColor(255,128,0);
//NoFill draws only an outline
ofNoFill();
ofSetLineWidth(1); // A higher value will render thicker lines
ofDrawRectangle(300, 50, 100, 100); // Top left corner at (50, 50), 100 wide x 100 high

//Draw a filled rectangle
ofSetColor(0,255,0);
ofFill(); //Turn on fill again
ofDrawTriangle(500, 150, 550, 50, 600, 150); // Three corners: (500, 150), (550, 50), (600, 150)
    
//Draw a skinny line
ofSetColor(128,255,0);
ofSetLineWidth(1); // A higher value will render thicker lines
ofDrawLine(700, 50, 700, 150); // Line from (700, 50) to (700, 150)
    
//Draw a fat line
ofSetColor(0,255,128);
ofSetLineWidth(20); // A higher value will render thicker lines
ofDrawLine(20, 500, 120, 500); // Line from (700, 50) to (700, 150)
    
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
