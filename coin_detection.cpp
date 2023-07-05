#include <opencv2/opencv.hpp>

int main()
{
    // Load the input image
    cv::Mat image = cv::imread("coins.jpg");

    // Check if the image was loaded successfully
    if (image.empty())
    {
        std::cout << "Failed to load the image." << std::endl;
        return -1;
    }

    // Convert the image to grayscale
    cv::Mat grayImage;
    cv::cvtColor(image, grayImage, cv::COLOR_BGR2GRAY);

    // Apply Gaussian blur to reduce noise
    cv::GaussianBlur(grayImage, grayImage, cv::Size(5, 5), 0);

    // Apply Hough circle transformation to detect coins
    std::vector<cv::Vec3f> circles;
    cv::HoughCircles(grayImage, circles, cv::HOUGH_GRADIENT, 1, grayImage.rows / 8, 100, 30, 10, 100);

    // Draw circles around the detected coins
    for (const auto& circle : circles)
    {
        cv::Point center(cvRound(circle[0]), cvRound(circle[1]));
        int radius = cvRound(circle[2]);
        cv::circle(image, center, radius, cv::Scalar(0, 255, 0), 2);
    }

    // Display the image with coin detection
    cv::imshow("Coin Detection", image);
    cv::waitKey(0);

    return 0;
}
