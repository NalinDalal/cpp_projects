#include <opencv2/opencv.hpp>

int main() {
  // Load the image
  cv::Mat image = cv::imread("shapes.jpg");

  // Check if the image was successfully loaded
  if (image.empty()) {
    std::cout << "Failed to load the image." << std::endl;
    return -1;
  }

  // Convert the image to grayscale
  cv::Mat grayImage;
  cv::cvtColor(image, grayImage, cv::COLOR_BGR2GRAY);

  // Apply thresholding to create a binary image
  cv::Mat binaryImage;
  cv::threshold(grayImage, binaryImage, 127, 255, cv::THRESH_BINARY);

  // Find contours in the binary image
  std::vector<std::vector<cv::Point>> contours;
  cv::findContours(binaryImage, contours, cv::RETR_EXTERNAL,
                   cv::CHAIN_APPROX_SIMPLE);

  // Iterate over each contour and detect the shape
  for (const auto &contour : contours) {
    // Approximate the contour with a polygon
    std::vector<cv::Point> approx;
    cv::approxPolyDP(contour, approx, cv::arcLength(contour, true) * 0.02,
                     true);

    // Determine the number of sides of the polygon
    int sides = static_cast<int>(approx.size());

    // Determine the shape based on the number of sides
    std::string shapeName;
    if (sides == 3)
      shapeName = "Triangle";
    else if (sides == 4)
      shapeName = "Rectangle";
    else if (sides == 5)
      shapeName = "Pentagon";
    else if (sides == 6)
      shapeName = "Hexagon";
    else
      shapeName = "Circle";

    // Draw the shape name on the image
    cv::putText(image, shapeName, contour[0], cv::FONT_HERSHEY_SIMPLEX, 0.5,
                cv::Scalar(0, 0, 255), 2);
  }

  // Display the image with shape detection
  cv::imshow("Shape Detection", image);
  cv::waitKey(0);

  return 0;
}
