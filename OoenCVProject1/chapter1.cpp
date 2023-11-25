#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;
using namespace cv;
using namespace std;

//////// images ////////
//
//void main() {
//
//    string path = "Resources/flower.png";
//   Mat img = imread(path);
//    imshow("Image", img);
//  waitKey(0);
//
//}

//////// videos ////////

///void main() {

///    string path = "Resources/video.mp4";
///    VideoCapture Cap(path);
///    Mat img;

  ///  while (true) {
  ///    Cap.read(img);
  ///     imshow("Image", img);
  ///      waitKey(40);

 ///   }

///}
//////// Webcam ////////

void main() {

    VideoCapture Cap(1);
    Mat img;

    while (true) {
        Cap.read(img);
        imshow("Image", img);
        waitKey(1);

    }

}
