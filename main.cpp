#include <iostream>
#include "opencv2/opencv.hpp"


using namespace cv;
int main() {
    Mat m(Size(500, 500), CV_8UC3, Scalar(0, 0, 255));
    imshow("123", m);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
