//
//  AnalogUI.hpp
//  timeAltApp
//
//  Created by Shin Hanagatata on 2017/03/20.
//
//

#ifndef AnalogUI_hpp
#define AnalogUI_hpp

#include <stdio.h>
#include "ofMain.h"

class Analog{
private:
    int r;
    ofColor c;
    ofPoint cp;
    string title;
    int tickInterval;//mili second
    int maxsec;//second
public:
    Analog();
    void setParam(int _r,ofPoint _p,ofColor _c);
    void draw();
    
};
#endif /* AnalogUI_hpp */
