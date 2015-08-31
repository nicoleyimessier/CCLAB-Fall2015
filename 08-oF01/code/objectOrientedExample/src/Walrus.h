//
//  Walrus.h
//  objectOrientedExample
//
//  Created by Jennifer Presto on 10/19/14.
//
//

#pragma once

#include "ofMain.h"

class Walrus {
public:
    
    // constructor
    Walrus();
    
    // variables
    float posX, posY;
    float velX, velY;
    
    float size;
    
    float r, g, b;
    
    // methods
    void setup();
    void move();
    void display();
    
    void reset(float newPosX, float newPosY);
    
    
};