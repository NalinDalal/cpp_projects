#include <opencv2/opencv.hpp>

int main() {
  // Open the video file
  cv::VideoCapture cap("video.mp4");

  // Check if the video file was successfully opened
  if (!cap.isOpened()) {
    std::cout << "Failed to open the video file." << std::endl;
    return -1;
  }

  // Create a window to display the video frames
  cv::namedWindow("Video", cv::WINDOW_NORMAL);

  while (true) {
    cv::Mat frame;

    // Read the next frame from the video
    if (!cap.read(frame))
      break;

    // Display the current frame
    cv::imshow("Video", frame);

    // Check for keyboard input
    char key = cv::waitKey(30);
    if (key == 'q' || key == 27) // 'q' key or ESC key
      break;
  }

  // Release the video capture object and close the window
  cap.release();
  cv::destroyAllWindows();

  return 0;
}
