
#include "Ball.h"


//------------------------------------
void Ball::setup(float mX, float mY){

    //define x and y coordinates
    x = mX;
    y = mY;

    //set color to random
    color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
    
    //set velocity to random
    xVel = ofRandom(-5, 5);
    yVel = ofRandom(-5, 5);
    

};


//------------------------------------
void Ball::update(){

    //move ball
    x += xVel;
    y += yVel;
    
    //add ball bounce
    if (x >= ofGetWidth()) {
        x = ofGetWidth();
        xVel *= -1;
    }
    
    if (x <= 0) {
        x = 0;
        xVel *= -1;
    }
    
    if (y >= ofGetHeight()) {
        y = ofGetHeight();
        yVel *= -1;
    }
    
    if (y <= 0) {
        y = 0;
        yVel *= -1;
    }
    
};


//------------------------------------
void Ball::draw(){
    //set color + draw ball
    ofSetColor(color);
    ofCircle(x, y, 10);
};







