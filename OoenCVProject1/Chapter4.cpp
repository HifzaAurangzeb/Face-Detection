#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

//////// Color Detection ////////

Mat imgHSV,mask;
int hmin = 0, smin = 110, vmin = 153;
int hmax = 19, smax = 240, vmax = 255;

 void main() {

    string path = "Resources/flower.png";
    Mat img = imread(path);

  cvtColor(img, imgHSV, COLOR_BGR2HSV);

  Scalar lower(hmin, smin, vmin);
  Scalar upper(hmax, smax, vmax);
  inRange(imgHSV, lower, upper, mask);

    imshow("Image", img);
    imshow("Image HSV", imgHSV);
    imshow("Image Mask", mask);
  waitKey(0);

}