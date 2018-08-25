#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/ml.hpp"
#include <math.h>
#include <iostream>

using namespace cv;
using namespace std;
using namespace cv::ml;

int main()
{

    // Open image
    Mat image = imread("images/waldo/face/waldo5.jpg", CV_LOAD_IMAGE_COLOR);
    Mat grey;

    // Check if image variable contains an image
    if ( ! image.data )
    {
        cout << "image error" << endl;
        return -1;
    }

    else
    {
        cout << "image opened correctly" << endl;
    }

    // Convert image to greyscale and save it to grey
    cvtColor(image, grey, CV_BGR2GRAY);

    // Open image in a window
    namedWindow( "Display window", WINDOW_AUTOSIZE);
    imshow("Display window", grey);
    waitKey(0);

    return 0;
}
