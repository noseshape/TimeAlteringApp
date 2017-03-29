//
//  Btn.cpp
//  timeAltApp
//
//  Created by Shin Hanagatata on 2017/03/17.
//
//

#include "Btn.hpp"

Btn::Btn(){
}

void Btn::setParam(string _t, int _w, int _h, ofPoint _p, ofColor _c) {
    title = _t;
    w = _w;
    h = _h;
    p = _p;
    c = _c;

}

void Btn::draw() {
    ofSetColor(c);
    ofFill();
    ofDrawRectangle(p, w, h);
    ofSetColor(255);
    ofDrawBitmapString(title,p.x+5,p.y+h/2-5);
}

void Btn::switchModes(int mode, int _mode) {
    int mx = ofGetMouseX();
    int my = ofGetMouseY();
    if(p.x<= mx&&mx<=p.x+w && p.y<=my&&my<=p.y+h){
        mode = _mode;
    }
}