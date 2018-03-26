#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    faces.resize(20); // allocate space for 20 faces in vector
    for(int i = 0; i < faces.size(); i++){
        faces[i].setup();
        faces[i].setColor();
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
for(int i = 0; i < faces.size(); i++){

//in update we map the mouseY position to the speed property of our faces objects
//ofMap maps and incoming range of data to an outgoing range of data http://openframeworks.cc/documentation/math/ofMath/#!show_ofMap
    
    faces[i].speed = ofMap(mouseY, 0, ofGetHeight(), -0.5, .5);
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i = 0; i < faces.size(); i++){
        for(int x = 0; x < ofGetWidth(); x+=50){
        faces[i].draw(x,i * 60);
        }
        for(int y = 0; y < ofGetWidth(); y+=50){
            faces[i].draw(y,i * 60);
        }
    }
    

    

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
