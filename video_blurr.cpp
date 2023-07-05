#include <opencv2/opencv.hpp>

int main()
{
    // Open the video file
    cv::VideoCapture cap("video.mp4");

    // Check if the video file was successfully opened
    if (!cap.isOpened())
    {
        std::cout << "Failed to open the video file." << std::endl;
        return -1;
    }

    // Get the video's properties
    int width = static_cast<int>(cap.get(cv::CAP_PROP_FRAME_WIDTH));
    int height = static_cast<int>(cap.get(cv::CAP_PROP_FRAME_HEIGHT));
    double fps = cap.get(cv::CAP_PROP_FPS);

    // Create a VideoWriter to save the blurred video
    cv::VideoWriter writer("blurred_video.mp4", cv::VideoWriter::fourcc('X', '2', '6', '4'), fps, cv::Size(width, height));

    // Create a window to display the video frames
    cv::namedWindow("Blurred Video", cv::WINDOW_NORMAL);

    while (true)
    {
        cv::Mat frame;

        // Read the next frame from the video
        if (!cap.read(frame))
            break;

        // Apply blur to the frame
        cv::GaussianBlur(frame, frame, cv::Size(15, 15), 0);

        // Display the blurred frame
        cv::imshow("Blurred Video", frame);

        // Write the blurred frame to the output video file
        writer.write(frame);

        // Check for keyboard input
        char key = cv::waitKey(30);
        if (key == 'q' || key == 27) // 'q' key or ESC key
            break;
    }

    // Release the video capture object, video writer, and close the window
    cap.release();
    writer.release();
    cv::destroyAllWindows();

    return 0;
}
