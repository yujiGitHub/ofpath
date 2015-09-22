#include "ofApp.h"
float angle = 0;
float i = 0;
ofPath path = ofPath();
ofVec2f vec;
ofVec2f tri1;
ofVec2f tri2;
ofVec2f tri3;
//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    ofSetBackgroundAuto(true);
    
    path.setMode(ofPath::POLYLINES);
    path.setStrokeColor(ofColor(255,0,0));
    path.setStrokeWidth(1);
    
    vec = ofVec2f(0+ofGetWidth()/2, ofGetHeight()/2);
    tri1 = ofVec2f(100*cos(PI), 100*sin(PI))+vec;
    tri2 = ofVec2f(100*cos(PI/3), 100*sin(PI/3))+vec;
    tri3 = ofVec2f(100*cos(-PI/3), 100*sin(-PI/3))+vec; 
    path.setFilled(false);

}

//--------------------------------------------------------------
void ofApp::update(){
    if(angle<120)angle+=2;
//    angle++;
    i+=0.03;
}

//--------------------------------------------------------------
void ofApp::draw(){
    path.clear();
   
    tri1 = tri1.rotateRad(i/20.0f, vec);
    tri2 = tri2.rotateRad(i/20.0f, vec);
    tri3 = tri3.rotateRad(i/20.0f, vec);
    
    path.triangle(tri1,tri2,tri3);
    path.lineTo(tri2);
    path.arc(0+ofGetWidth()/2, 0+ofGetHeight()/2, 200, 200, 0, 120);
    path.lineTo(tri1);
    path.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
