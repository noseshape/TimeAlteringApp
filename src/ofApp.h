#pragma once

#include "ofxiOS.h"
#include "Btn.hpp"
#include "ofxGui.h"


class ofApp : public ofxiOSApp {
	
    public:
        void setup();
        void update();
        void draw();
        void exit();
	
        void touchDown(ofTouchEventArgs & touch);
        void touchMoved(ofTouchEventArgs & touch);
        void touchUp(ofTouchEventArgs & touch);
        void touchDoubleTap(ofTouchEventArgs & touch);
        void touchCancelled(ofTouchEventArgs & touch);

        void lostFocus();
        void gotFocus();
        void gotMemoryWarning();
        void deviceOrientationChanged(int newOrientation);

    ofxPanel gui0, gui1, gui2;
    ofxIntSlider sec, tick;
    int guiW, guiH; //for Retina

    Btn btn[3];
    int mode;
    int w,h;

    ofSoundPlayer tickSound;







};


