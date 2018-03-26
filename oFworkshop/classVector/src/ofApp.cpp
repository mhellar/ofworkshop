#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    faces.resize(20); // allocate space for 20 faces in vector
    
    //loop through the vectors calling setup and setColor metods for each
    for(int i = 0; i < faces.size(); i++){
        faces[i].setup();
        faces[i].setColor();
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
for(int i = 0; i < faces.size(); i++){
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //loop through the vector calling the draw method for each
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
