#include "opencv2/opencv.hpp"
#include "opencv2/ximgproc.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{

    Mat image;
    image = imread("/mnt/8668734168732F55/Development/opencv_template/images/tesla.jpg", cv::IMREAD_COLOR );   // Read the file

    cv::resize(image, image, Size(image.size().width/4, image.size().height/4)); // resize the image by a factor of 1/4

    if(! image.data )                              // Check for invalid input
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }

    namedWindow( "Display Tesla", WINDOW_AUTOSIZE );// Create a window for display.
    imshow( "Display Tesla", image );                   // Show our image inside it.

    waitKey(0);                                          // Wait for a keystroke in the window
    return 0;
}