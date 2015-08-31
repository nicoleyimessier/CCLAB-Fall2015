#pragma once


// you must include the header files of the classes you create

#include "ofMain.h"
#include "Walrus.h"

// we define the constant NUMERNIES
// by convention, this is written in all caps
#define NUMERNIES 100


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    // bert is a standalone Walrus
    Walrus bert;
    
    // ernie is an array of Walruses
    Walrus ernie[NUMERNIES];
		
};
