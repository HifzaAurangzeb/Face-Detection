#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>


using namespace cv;
using namespace std;


//////// Images  //////

void main() {
	string path = "Resources/tesr.png";
	Mat img = imread(path);

	CascadeClassifier faceCascade;
	faceCascade.load("Resources/haarcascade_afrontalface_default.xml");
	if (faceCascade.empty()) {
		cout << "XML file not loaded" << endl;
	}
	imshow("Image", img);
	waitKey(0);


