# MiniPixLab

MiniPixLab is an image analysis and editing tool that utilizes OpenCV and ImageMagick libraries for pixel manipulation.

## Features

- **Pixel Manipulation**: Perform various operations on image pixels using OpenCV.
- **Image Editing**: Utilize ImageMagick for comprehensive image editing.
- **Intuitive Interface**: A user-friendly GUI built with Qt.

## Installation

### Prerequisites

Ensure you have the following installed:

- **Qt 5.15**: A cross-platform application framework.
- **MingW 5.15**: 32-bit compiler for building the application.
- **OpenCV**: Computer vision library, compiled with Qt MingW32 support.
- **ImageMagick**: Tool for image manipulation, used with Msys Mingw32.

### Setting Up the Environment

1. **Add Libraries to Environment Variables**: Make sure that paths to Qt, MingW, OpenCV, and ImageMagick are added to your system's environment variables.
2. **Configure the Project**: Edit the `.pro` file to point to your build directories. Ensure that paths for Qt, MingW, OpenCV, and ImageMagick are correctly set.

### Building the Project

1. **Clone the Repository**:

    ```sh
    git clone https://github.com/Mohammad-Imran01/Mini-PixLab.git
    cd Mini-PixLab
    ```

2. **Run qmake**:

    ```sh
    qmake MiniPixLab.pro
    ```

3. **Compile the Project**:

    ```sh
    mingw32-make
    ```

4. **Run the Application**:

    ```sh
    MiniPixLab.exe
    ```

## Usage

1. **Open an Image**: Use the file menu to open an image you want to analyze or edit.
2. **Manipulate Pixels**: Utilize available tools to manipulate and analyze the image.
3. **Save Changes**: Save your edited image through the file menu.

## Screenshots

Here is a sample screenshot of MiniPixLab:

![Example Screenshot](https://github.com/Mohammad-Imran01/Mini-PixLab/blob/main/screenshots/Mini%20PixMap%20SS.png)

## Contributing

If you'd like to contribute to MiniPixLab, please follow these guidelines:

1. **Fork the Repository**: Create your own fork of the repository.
2. **Create a Branch**: Make a new branch for your changes.
3. **Make Changes**: Implement your changes or new features.
4. **Submit a Pull Request**: Open a pull request describing your changes.

## License

This project is licensed under the [MIT License](LICENSE).

## Contact

For any questions or support, please contact:

- **Email**: [your-email@example.com](mailto:imranmbhd2412@gmail.com)
