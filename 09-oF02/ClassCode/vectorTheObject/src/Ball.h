#pragma once
#include "ofMain.h"

class Ball{

public:
    
    void setup(float mX, float mY);
    void update();
    void draw();

    //create vector OBJECTS that hold two variables each.
    ofVec2f pos;
    ofVec2f vel;

    ofColor color;
};
