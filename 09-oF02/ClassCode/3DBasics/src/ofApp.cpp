#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    counter = 0;
    ofNoFill();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    //every time we loop, increas the counter by 1.
    counter++;
    
    //every five loops, create a new box.
    if(counter >= 5){
        Box sgtPepper;
        sgtPepper.setup(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
        boxVector.push_back(sgtPepper);
        counter = 0;
    };
    
    //on every loop, update each element in the box
    for(int i=0; i < boxVector.size(); i++){
        boxVector[i].update();
    };
    
    //if there are more than 100 boxVectors, erase the extra.
    while(boxVector.size() > 100){
        boxVector.erase(boxVector.begin());
    };
}

//--------------------------------------------------------------
void ofApp::draw(){

    //for each sgtPepper in boxVector, draw.
    for(int i = 0; i < boxVector.size(); i++){
        boxVector[i].draw();
    };
    
    //draw debug string.
    ofSetColor(255);
    string debugString = "Number of Boxes: " + ofToString(boxVector.size()) + "\n" + "Framerate: " + ofToString(ofGetFrameRate());
    
    ofDrawBitmapString(debugString, 20, 20);
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
