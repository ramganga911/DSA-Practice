#include <iostream>
#include <windows.h>

bool CopyFolder(const std::string& source, const std::string& destination) {
    // Create the destination directory if it doesn't exist
    if (!CreateDirectory(destination.c_str(), NULL) && GetLastError() != ERROR_ALREADY_EXISTS) {
        std::cerr << "Failed to create the destination directory." << std::endl;
        return false;
    }

    WIN32_FIND_DATA findFileData;
    std::string sourcePath = source + "\\*";
    HANDLE hFind = FindFirstFile(sourcePath.c_str(), &findFileData);

    if (hFind == INVALID_HANDLE_VALUE) {
        std::cerr << "Failed to find the source directory." << std::endl;
        return false;
    }

    do {
        if (strcmp(findFileData.cFileName, ".") != 0 && strcmp(findFileData.cFileName, "..") != 0) {
            std::string sourceFile = source + "\\" + findFileData.cFileName;
            std::string destinationFile = destination + "\\" + findFileData.cFileName;

            if (findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
                // Recursively copy subdirectories
                if (!CopyFolder(sourceFile, destinationFile)) {
                    FindClose(hFind);
                    return false;
                }
            } else {
                // Copy files
                if (!CopyFile(sourceFile.c_str(), destinationFile.c_str(), FALSE)) {
                    std::cerr << "Failed to copy file: " << sourceFile << std::endl;
                    FindClose(hFind);
                    return false;
                }
            }
        }
    } while (FindNextFile(hFind, &findFileData) != 0);

    FindClose(hFind);
    return true;
}

int main() {
    std::string sourceFolder = "D:/Business/code playground/C++ course/lab/malab/ramganga";  // Replace with the source folder path
    std::string destinationFolder = "D:/Business/code playground/C++ course/lab/malab/newramganga";  // Replace with the destination folder path

    if (CopyFolder(sourceFolder, destinationFolder)) {
        std::cout << "Folder copied successfully." << std::endl;
    } else {
        std::cerr << "Failed to copy folder." << std::endl;
    }

    return 0;
}
