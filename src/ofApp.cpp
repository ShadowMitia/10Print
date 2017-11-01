#include "ofApp.h"

double random_0_1()
{
  static std::random_device rd{};
  static std::mt19937 generator{rd()};
  std::uniform_real_distribution<double> dis(0.0, std::nextafter(1.0, std::numeric_limits<double>::max()));
  return dis(generator);
}


//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(ofColor::black);
  ofSetFrameRate(5);
  ofSetWindowTitle("10 PRINT");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  ofSetColor(ofColor::white);

  for (unsigned int i = 0; i < ofGetWindowWidth(); i += print_size)
    {
      for(unsigned int j = 0; j < ofGetWindowHeight(); j += print_size)
	{
	  if (random_0_1() < 0.5)
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

//------------------------------------------------------------
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
