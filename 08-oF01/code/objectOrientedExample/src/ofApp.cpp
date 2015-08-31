#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(50); // set background to dark gray
    
    // the next line (optional) controls how round your circles are;
    // the rounder they are, the more they'll slow your computer down
    ofSetCircleResolution(50);
    
    // we'll call the setup function just for bert
    bert.setup();
    // bert.size = 200; // if you uncomment this line, bert will be bigger than the ernies
    
    // here we call the setup function for all the ernies
    for (int i = 0; i < NUMERNIES; i++) {
        ernie[i].setup();
    }
    
    // in the for loop above, we set up all the ernies.
    // But each of the ernies is an individual object.
    // At any time, therefore, we can access any one of the ernies. Here,
    // we're singling out ernie #77 and we're making him huge.
    
    // comment out this line to make him the same size as the other ernies
    ernie[77].size = 150;
    
    // remember that for-loops don't have to always go through entire arrays
    // say ernies 33 - 72 like dressing in the same color
    // you can set all their colors to red
    // uncomment the for-loop below to see:
    //for (int i = 33; i < 73; i++) {
    //    ernie[i].r = 255;
    //    ernie[i].g = 0;
    //    ernie[i].b = 0;
    //}
}

//--------------------------------------------------------------
void ofApp::update(){
    // update() gets called each frame before draw() (below)
    // this is where we usually make changes before drawing
    
    // first we move bert
    bert.move();
    
    // then we move all the ernies
    // note that i=i+1 is usually written as i++
    for (int i = 0; i < NUMERNIES; i=i+1) {
        ernie[i].move();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    // we'll draw bert to the screen
    bert.display();
    
    // then all the ernies
    for (int i = 0; i < NUMERNIES; i++) {
        ernie[i].display();
    }
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
    // every time the mouse is pressed, we'll increase bert's size by 10
    bert.size += 10;
    
    // when the mouse is pressed, we call the reset() function on all the ernies
    for (int i = 0; i < NUMERNIES; i++) {
        ernie[i].reset(x, y); // could also use (mouseX, mouseY) here
    }
    
    // Because the reset function sets the position and _size_ of a Walrus,
    // if we call it on all the ernies, we're resetting all their sizes.
    // Therefore, if we want ernie #77 to remain bigger than the others, we
    // need to then set his size _again_ after resetting all the ernies.
    
    // comment this out to make ernie #77 blend in
    // ernie[77].size = 500;
    
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
