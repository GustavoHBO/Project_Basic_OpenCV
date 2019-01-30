#include <stdio.h>
#include <opencv2/opencv.hpp>
using namespace cv;
int main(int argc, char **argv)
{
    char const *img = "./../img/OpenCV_Logo.png";
    Mat image;
    if (argc != 2)
    {
        printf("usage: example <Image_Path>\n");
        printf("Opening the default image.\n");
        image = imread(img, 1);
    }
    else
    {
        image = imread(argv[1], 1);
    }
    if (!image.data)
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Example", WINDOW_AUTOSIZE);
    imshow("Example", image);
    waitKey(0);
    return 0;
}