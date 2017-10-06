#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:

		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		ofImage bird1;
		ofImage bird2;
		ofImage bird3;
		ofImage bird4;
		ofImage bird5;
		ofImage bird6;
		ofImage bird7;
		ofImage bird8;
		ofImage bird9;
		ofImage bird10;
		ofImage bird11;
		ofImage bird12;
		ofImage bird13;
		ofImage bird14;
		ofImage bird15;
		ofImage bird16;
		ofImage shadow;

		ofSoundPlayer beep1;
		ofSoundPlayer beep2;
		ofSoundPlayer beep3;
		ofSoundPlayer beep4;
		ofSoundPlayer beep5;
		ofSoundPlayer beep6;
		ofSoundPlayer beep7;
		ofSoundPlayer beep8;

		bool sound;
};
