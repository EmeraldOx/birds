#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(214, 253, 255);
	bird1.load("images/bird 1 1.png");
	bird2.load("images/bird 1 2.png");
	bird3.load("images/bird 2 1.png");
	bird4.load("images/bird 2 2.png");
	bird5.load("images/bird 3 1.png");
	bird6.load("images/bird 3 2.png");
	bird7.load("images/bird 4 1.png");
	bird8.load("images/bird 4 2.png");
	bird9.load("images/bird 5 1.png");
	bird10.load("images/bird 5 2.png");
	bird11.load("images/bird 6 1.png");
	bird12.load("images/bird 6 2.png");
	bird13.load("images/bird 7 1.png");
	bird14.load("images/bird 7 2.png");
	bird15.load("images/bird 8 1.png");
	bird16.load("images/bird 8 2.png");

	shadow.load("images/bird shadow.png");
	
	beep1.loadSound("sound/beep 1.wav");
	beep2.loadSound("sound/beep 2.wav");
	beep3.loadSound("sound/beep 3.wav");
	beep4.loadSound("sound/beep 4.wav");
	beep5.loadSound("sound/beep 5.wav");
	beep6.loadSound("sound/beep 6.wav");
	beep7.loadSound("sound/beep 7.wav");
	beep8.loadSound("sound/beep 8.wav");

	sound = true;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	if (ofGetMousePressed()) {
		if (mouseX >= 100 && mouseX <= 200 && mouseY >= 200 && mouseY <= 300) {
			shadow.draw(100, 206);
			bird2.draw(100, 200);
			if (sound == true) {
				beep1.play();
				sound = false;
			}
		}
		else {
			shadow.draw(100, 206);
			bird1.draw(100, 200);
		}
		if (mouseX >= 200 && mouseX <= 300 && mouseY >= 200 && mouseY <= 300) {
			shadow.draw(200, 206);
			bird4.draw(200, 200);
			if (sound == true) {
				beep2.play();
				sound = false;
			}
		}
		else {
			shadow.draw(200, 206);
			bird3.draw(200, 200);
		}
		if (mouseX >= 300 && mouseX <= 400 && mouseY >= 200 && mouseY <= 300) {
			shadow.draw(300, 206);
			bird6.draw(300, 200);
			if (sound == true) {
				beep3.play();
				sound = false;
			}
		}
		else {
			shadow.draw(300, 206);
			bird5.draw(300, 200);
		}
		if (mouseX >= 400 && mouseX <= 500 && mouseY >= 200 && mouseY <= 300) {
			shadow.draw(400, 206);
			bird8.draw(400, 200);
			if (sound == true) {
				beep4.play();
				sound = false;
			}
		}
		else {
			shadow.draw(400, 206);
			bird7.draw(400, 200);
		}
		if (mouseX >= 500 && mouseX <= 600 && mouseY >= 200 && mouseY <= 300) {
			shadow.draw(500, 206);
			bird10.draw(500, 200);
			if (sound == true) {
				beep5.play();
				sound = false;
			}
		}
		else {
			shadow.draw(500, 206);
			bird9.draw(500, 200);
		}
		if (mouseX >= 600 && mouseX <= 700 && mouseY >= 200 && mouseY <= 300) {
			shadow.draw(600, 206);
			bird12.draw(600, 200);
			if (sound == true) {
				beep6.play();
				sound = false;
			}
		}
		else {
			shadow.draw(600, 206);
			bird11.draw(600, 200);
		}
		if (mouseX >= 700 && mouseX <= 800 && mouseY >= 200 && mouseY <= 300) {
			shadow.draw(700, 206);
			bird14.draw(700, 200);
			if (sound == true) {
				beep7.play();
				sound = false;
			}
		}
		else {
			shadow.draw(700, 206);
			bird13.draw(700, 200);
		}
		if (mouseX >= 800 && mouseX <= 900 && mouseY >= 200 && mouseY <= 300) {
			shadow.draw(800, 206);
			bird16.draw(800, 200);
			if (sound == true) {
				beep8.play();
				sound = false;
			}
		}
		else {
			shadow.draw(800, 206);
			bird15.draw(800, 200);
		}
	}
	else {
		shadow.draw(100, 206);
		shadow.draw(200, 206);
		shadow.draw(300, 206);
		shadow.draw(400, 206);
		shadow.draw(500, 206);
		shadow.draw(600, 206);
		shadow.draw(700, 206);
		shadow.draw(800, 206);
		bird1.draw(100, 200);
		bird3.draw(200, 200);
		bird5.draw(300, 200);
		bird7.draw(400, 200);
		bird9.draw(500, 200);
		bird11.draw(600, 200);
		bird13.draw(700, 200);
		bird15.draw(800, 200);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	sound = true;
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