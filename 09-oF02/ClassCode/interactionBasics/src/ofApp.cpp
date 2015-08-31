#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    //create an array that defines our colors
    myColors[0] = ofColor::magenta;
    myColors[1] = ofColor::white;
    myColors[2] = ofColor::salmon;
    myColors[3] = ofColor::blue;
    myColors[4] = ofColor::chartreuse;
    
    //set our background color + stop it from renewing automatically
    ofBackground(0);
    ofSetBackgroundAuto(false);
    
    
    //only draw the circle stroke
    ofNoFill();
    
    //set up our circles
    ofSetCircleResolution(60);
    ofEnableSmoothing();
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    //add a switch case thats changes color depending on
    //the key pressed

    switch (key) {
        case '1':
            ofSetColor(myColors[0]);
            break;
        case '2':
            ofSetColor(myColors[1]);
            break;
        case '3':
            ofSetColor(myColors[2]);
            break;
        case '4':
            ofSetColor(myColors[3]);
            break;
        case '5':
            ofSetColor(myColors[4]);
            break;
        default:
            ofSetColor(ofColor::whiteSmoke);
            break;
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

    //make it bigger
    circleSize++;
    
    //draw a circle
    ofCircle(x, y, circleSize);
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    //reset the circle size
    circleSize = 0;

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
