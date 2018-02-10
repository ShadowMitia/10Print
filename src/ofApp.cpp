#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(ofColor::black);
  ofSetFrameRate(60);
  ofSetWindowTitle("10 PRINT");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  ofSetColor(ofColor::white);

  for (int i = 0; i < ofGetWindowWidth(); i += print_size)
    {
      for(int j = 0; j < ofGetWindowHeight(); j += print_size)
	{

	  std::uniform_real_distribution<double> dis(0.0, std::nextafter(1.0, std::numeric_limits<double>::max()));

	  if (dis(generator) < 0.5)
	    {
	      ofDrawLine(i, j + print_size, i + print_size, j);
	    }
	  else
	    {
	      ofDrawLine(i, j, i + print_size, j + print_size);
	    }
	}
    }
}
