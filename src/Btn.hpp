//
//  Btn.hpp
//  timeAltApp
//
//  Created by Shin Hanagatata on 2017/03/17.
//
//

#ifndef Btn_hpp
#define Btn_hpp

#include <stdio.h>
#include "ofMain.h"

class Btn{
private:
    int w,h;
    ofColor c;
    ofPoint p;
    string title;
public:
    Btn();
    void setParam(string _t, int _w, int _h, ofPoint _p,ofColor _c);
    void draw();
    void switchModes(int mode, int _mode);

};

#endif /* Btn_hpp */


