//
//  DigitalUI.cpp
//  timeAltApp
//
//  Created by Shin Hanagatata on 2017/03/20.
//
//

#include "DigitalUI.hpp"

Digital(){

}

void Digital::setParam(int _r, ofPoint _p, ofColor _c, int w, int h) {
    r=_r; cp=_p; c=_c;
    font.load("/data/DIN.otf",24);

}

void Digital::draw() {
    font.drawString(digitalTime,)
}