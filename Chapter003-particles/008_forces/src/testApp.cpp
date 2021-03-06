#include "testApp.h"

/************
 *	In this application:
 *	1. Introduce "Thing"
 *	2. Introduce "constructors"
 *	3. Forces!
 *	4. Use a class without completely understanding how it works.
 **********/


//--------------------------------------------------------------
void testApp::setup(){
	ofSetFrameRate(36);

	gravity.x = 0;
	gravity.y = 0.08;
	
	wind.x = -0.1;
	wind.y = 0;
}

//--------------------------------------------------------------
void testApp::update(){
	
	t.applyForce(gravity);
	t.applyForce(wind);
	
	// Make the Thing slow down as it passes through some "liquid"
	// Do this by applying a negative force
	// 1. Decide on a drag coeffecient (negative)
	// 2. Multiply it by the vel
	// 3. Apply the force
	// 4. update()

	
	t.update();
}

//--------------------------------------------------------------
void testApp::draw(){

	t.draw();
	
	// Draw the wind and gravity
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

    t.reset();
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}
