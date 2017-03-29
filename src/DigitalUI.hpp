//
//  DigitalUI.hpp
//  timeAltApp
//
//  Created by Shin Hanagatata on 2017/03/20.
//
//

#ifndef DigitalUI_hpp
#define DigitalUI_hpp

#include <stdio.h>
#include "ofMain.h"

class Digital{
private:
    int r;
    ofColor c;
    ofPoint cp;
    string title;
    int tickInterval;//mili second
    int maxsec;//second
    ofTrueTypeFont font;
    string digitalTime;
    int dispW,dispH;
public:
    Digital();
    void setParam(int _r,ofPoint _p,ofColor _c, int w, int h);
    void draw();

};

#endif /* DigitalUI_hpp */
