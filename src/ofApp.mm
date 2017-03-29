#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(40);

    mode = 0;
    guiW = 100;
    guiH = 20;

    gui0.setup();
    gui0.add(sec.setup("sec",1000,1,5000));
    gui0.add(tick.setup("tick",60,1,600));

    gui1.setup();

    gui2.setup();

    w=ofGetWidth();
    h=ofGetHeight();
    btn[0].setParam("Alterable \nTimer",w/3,h/12,ofPoint(5,h-(h/12)-5),ofColor(100,0,70));
    btn[1].setParam("Alterable \nSecond",w/3,h/12,ofPoint(5+5+w/3,h-(h/12)-5),ofColor(30,18,64));
    btn[2].setParam("Alterable \nClock",w/3,h/12,ofPoint(5+5+w/3+5+w/3,h-(h/12)-5),ofColor(25,94,104));




}

//--------------------------------------------------------------
void ofApp::update(){
        //----------------------------
    if(mode == 0) {


    }

        //----------------------------
    else
    if(mode == 1){



    }

        //----------------------------
    else
    if(mode == 2){



    }


}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawBitmapString(mode, w-10, h-10);

    btn[0].draw();
    btn[1].draw();
    btn[2].draw();

    //----------------------------
    if(mode == 0) {
        gui0.draw();


    }

    //----------------------------
    else
    if(mode == 1){
        gui1.draw();


    }

    //----------------------------
    else
    if(mode == 2){
        gui2.draw();


    }

}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::touchDown(ofTouchEventArgs & touch){

}

//--------------------------------------------------------------
void ofApp::touchMoved(ofTouchEventArgs & touch){

}

//--------------------------------------------------------------
void ofApp::touchUp(ofTouchEventArgs & touch){
    btn[0].switchModes(mode,1);

}

//--------------------------------------------------------------
void ofApp::touchDoubleTap(ofTouchEventArgs & touch){

}

//--------------------------------------------------------------
void ofApp::touchCancelled(ofTouchEventArgs & touch){
    
}

//--------------------------------------------------------------
void ofApp::lostFocus(){

}

//--------------------------------------------------------------
void ofApp::gotFocus(){

}

//--------------------------------------------------------------
void ofApp::gotMemoryWarning(){

}

//--------------------------------------------------------------
void ofApp::deviceOrientationChanged(int newOrientation){

}
