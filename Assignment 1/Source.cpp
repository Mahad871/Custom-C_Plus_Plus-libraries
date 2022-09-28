#include <opencv2/core.hpp>
#include <opencv2\cvconfig.h>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
    cv::Mat img = cv::imread("C:\\Users\\msasd\\OneDrive\\Desktop\\Vs Code\\Semester 3\\Data st\\Assignment 1\\Assignment 1\\Segmented Outputs\\mIMD002.bmp");
    Mat grey;
    namedWindow("First OpenCV Application", WINDOW_AUTOSIZE);
    cv::imshow("First OpenCV Application", img);
    cv::moveWindow("First OpenCV Application", 0, 45);
    for (int i = 0; i < img.rows/2; i++)
    {
        for (int j = 0; j < img.cols/2; j++)
        {

            Vec3f intensity = img.at<Vec3f>(i, j);
            float blue = intensity.val[0];
            float green = intensity.val[1];
            float red = intensity.val[2];
            if (intensity.val[0]!=0) {
                blue = 255;
                cout << " " << blue<< " ";
                /*cout << "G: " << green;
                cout << "R: " << red;*/
            }
            

        }

    }
    cout << "Rows: " << img.rows;
    cout << "\nCols: " << img.cols;
    cv::waitKey(0);
    cv::destroyAllWindows();
    return 0;
}
