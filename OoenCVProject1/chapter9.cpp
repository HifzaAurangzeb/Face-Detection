#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;
using namespace cv;
using namespace std;

//////// Webcam ////////

void main() {

    VideoCapture Cap(0);
    Mat img;

    while (true) {
        Cap.read(img);
        imshow("Image", img);
        waitKey(20);

    }

}

