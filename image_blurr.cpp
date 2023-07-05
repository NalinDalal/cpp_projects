#include <opencv2/opencv.hpp>

int main()
{
    // Read the input image
    cv::Mat image = cv::imread("input.jpg");

    // Check if the image was successfully loaded
    if (image.empty())
    {
        std::cout << "Failed to load the image." << std::endl;
        return -1;
    }

    // Apply blur effect using a Gaussian filter
    cv::Mat blurredImage;
    cv::GaussianBlur(image, blurredImage, cv::Size(15, 15), 0);

    // Display the original and blurred images
    cv::namedWindow("Original Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Original Image", image);

    cv::namedWindow("Blurred Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Blurred Image", blurredImage);

    // Wait for a key press
    cv::waitKey(0);

    // Close all windows
    cv::destroyAllWindows();

    return 0;
}
