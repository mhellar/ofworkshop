#include "ofApp.h"

//Listen to localhost
#define HOST "127.0.0.1"

//create osc message object
ofxOscMessage m;

//--------------------------------------------------------------
void ofApp::setup(){
    //now we need to set up a receiver
    receiver.setup(8000);
}

//--------------------------------------------------------------
void ofApp::update(){

    while(receiver.getNextMessage(m)) {
        //just print out the address of the message
//        cout << m.getAddress() + " " + ofToString(m.getArgAsFloat(0)) << endl;
        
        //create a string to hold the incoming arguments
        string msg_string;
        msg_string = m.getAddress();
        msg_string += ": ";
        
        //loop through the incoming arguments check their type and conver to string as needed
        for(int i = 0; i < m.getNumArgs(); i++){
            // get the argument type
            msg_string += m.getArgTypeName(i);
            msg_string += ":";
            // display the argument - make sure we get the right type
            if(m.getArgType(i) == OFXOSC_TYPE_INT32){
                msg_string += ofToString(m.getArgAsInt32(i));
            }
            else if(m.getArgType(i) == OFXOSC_TYPE_FLOAT){
                msg_string += ofToString(m.getArgAsFloat(i));
            }
            else if(m.getArgType(i) == OFXOSC_TYPE_STRING){
                msg_string += m.getArgAsString(i);
            }
            else{
                msg_string += "unknown";
            }
            ofLog(OF_LOG_NOTICE, msg_string);

        }
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
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
