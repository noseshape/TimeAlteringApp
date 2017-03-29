//
//  BaseScene.h
//  timeAltApp
//
//  Created by Shin Hanagatata on 2017/02/22.
//
//

#ifndef BaseScene_h
#define BaseScene_h

#include <stdio.h>
#include "ofxiOS.h"


#endif /* BaseScene_h */
class BaseScene {
    
public:
    
    //仮想関数 (virtual) として定義する//what is this?
    
    virtual void setup(){
//        ofBackground(40);
    };
    
    virtual void update(){};
    
    virtual void draw(){};
    
    virtual void keyPressed (int key){};
    
    virtual void keyReleased(int key){};
    
    virtual void mouseMoved(int x, int y ){};
    
    virtual void mouseDragged(int x, int y, int button){};
    
    virtual void mousePressed(int x, int y, int button){};
    
    virtual void mouseReleased(int x, int y, int button){};
    
    virtual void windowResized(int w, int h){};
    
};
