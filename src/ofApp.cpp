#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //Set a gradient background from white to gray
            //for adding an illusion of visual depth to the scene
            ofBackgroundGradient(ofColor(255), ofColor(128));
        ofSetVerticalSync(true);

    model.loadModel("cass_lattice.obj", 20);
    ofVboMesh mesh = model.getMesh(0);

    glEnable(GL_POINT_SMOOTH); // use circular points instead of square points
            glPointSize(1); // make the points bigger
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //Enable z-buffering
            glEnable(GL_DEPTH_TEST);
            cam.begin();
                glPushMatrix();//Store the coordinate system
                //draw in middle of the screen
                    glTranslatef(ofGetWidth() / 2, ofGetHeight() / 2, 0);
                    //tumble according to mouse
                    //glRotatef(-mouseY, 1, 0, 0);
                    //glRotatef(mouseX, 0, 1, 0);
                    glTranslatef(-ofGetWidth() / 2, -ofGetHeight() / 2, 0);
                    ofSetColor(0, 255, 255, 255);

                            //drawWithMesh();

                            //model.drawVertices
                           model.drawVertices();
                            ofPopMatrix();	//Restore the coordinate system
                                    cam.end();
                                    //Fps endeixh
                                    ofSetHexColor(0x000000);
                                    ofDrawBitmapString("fps: " + ofToString(ofGetFrameRate(), 2), 10, 15);

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
