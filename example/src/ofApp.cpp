#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	ofEnableAlphaBlending();
	ofBackground(127);
	
	original.load("original.png");
	mask.load("mask.png");
	destination = original;
	destinationInvert = original;
	
	destination.applyMask(mask);
	destinationInvert.applyMask(mask, true);	// true for invert

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	original.draw(0, 0);
	mask.draw(original.getWidth(), 0);
	destination.draw(0, original.getHeight());
	destinationInvert.draw(0, original.getHeight()*2);
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
