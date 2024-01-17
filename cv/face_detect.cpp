#include <opencv2/opencv.hpp>

int main() {
  // Load the face cascade
  cv::CascadeClassifier faceCascade;
  faceCascade.load("haarcascade_frontalface_default.xml");

  // Check if the face cascade was successfully loaded
  if (faceCascade.empty()) {
    std::cout << "Failed to load the face cascade." << std::endl;
    return -1;
  }

  // Open the default camera
  cv::VideoCapture camera(0);

  // Check if the camera is opened successfully
  if (!camera.isOpened()) {
    std::cout << "Failed to open the camera." << std::endl;
    return -1;
  }

  while (true) {
    // Read a frame from the camera
    cv::Mat frame;
    camera.read(frame);

    // Convert the frame to grayscale
    cv::Mat grayFrame;
    cv::cvtColor(frame, grayFrame, cv::COLOR_BGR2GRAY);

    // Detect faces in the frame
    std::vector<cv::Rect> faces;
    faceCascade.detectMultiScale(grayFrame, faces, 1.3, 5);

    // Draw rectangles around the detected faces
    for (const auto &face : faces) {
      cv::rectangle(frame, face, cv::Scalar(0, 255, 0), 2);
    }

    // Display the frame with face detection
    cv::imshow("Face Detection", frame);

    // Break the loop if the 'q' key is pressed
    if (cv::waitKey(1) == 'q') {
      break;
    }
  }

  // Release the camera
  camera.release();

  return 0;
}
