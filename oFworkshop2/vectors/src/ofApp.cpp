#include "ofApp.h"

vector<float> nums;  // create an empty vector of floats

vector<string> names;  // create an empty vector of string


//--------------------------------------------------------------
void ofApp::setup(){

    nums.push_back(10.5); // add a float with value 10.5 to the end of vector
    
    // cout << the original console log. endl wrtites a line break
    cout << nums[0] << endl; // print out the value of element at position 0
    
    nums.erase( nums.begin() ); // erase the first element in the vector
    
    cout << nums.size() << endl; // print the number of elements in the vector

    names.push_back("jane"); // add an element
    names.push_back("joe"); // add another
    names.push_back("randy"); // add another
    names.push_back("jill"); // add another - now has size of 2 with elements: "jane", "joe","randy", "jill"

    for(int i = 0; i < names.size(); i++){
        cout << names[i] << endl;
    }
        
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
//Loops through the vector and print out the values
    int y = 50;
    for(int i = 0; i < names.size(); i++){
        ofDrawBitmapString(names[i], y+=10, y+=10);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'a'){
         //add an element
         names.push_back("mark");
    }
    if(key == 'c'){
        //clear all elements
        names.clear();
    }
    if(key == 'f'){
        //add elements with a loop
        for(int i = 0; i < 50; i++){
            names.push_back(ofToString(i));
        }
    }
    if(key == 'p'){
        //remove last element
        names.pop_back();
    }
    if(key == 'd'){
        //removes the nth element
        if(names[2].length() != 0){
            names[2].erase();
        }
    }

    //more reading http://arturocastro.net/blog/2011/10/28/stl::vector/
    // http://openframeworks.cc/ofBook/chapters/stl_vector.html
    

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
