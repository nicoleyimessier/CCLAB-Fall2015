#pragma once
#include "ofMain.h"

class Box {
    
public:
    void setup(float mX, float mY);
    void update();
    void draw();
    
    //an ofVec3f works just like an ofVec2f, but with the added Z dimension
    
    ofVec3f pos;
    ofVec3f vel;
    
    ofColor color;
    
};