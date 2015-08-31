#include "Box.h"

//---------------------------
void Box::setup(float mX, float mY){

    //you can also use dot notation to reference x, y, and z
    pos.set(mX, mY, -1000.0);
    
    color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
    
    //you can also do pos.set - this is just for the sake of instruction
    vel.x = ofRandom(-1, 1);
    vel.y = ofRandom(-1, 1);
    vel.z = ofRandom(3, 10);


};

//---------------------------
void Box::update(){

    //increase pos vector by vel vector
    pos += vel;


};

//---------------------------
void Box::draw(){
    ofSetColor(color);
    ofDrawBox(pos.x, pos.y, pos.z, 30);


    
};