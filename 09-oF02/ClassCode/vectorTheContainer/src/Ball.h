#pragma once
#include "ofMain.h"

class Ball{

public:
    
    void setup(float mX, float mY);
    void update();
    void draw();

    float x, y;
    float xVel, yVel;
    ofColor color;
};
