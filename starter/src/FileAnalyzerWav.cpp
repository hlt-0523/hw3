#include "FileAnalyzerWav.h"
#include <fstream>
#include <iostream>

FileAnalyzerWav::FileAnalyzerWav(const std::string& filename) : filename_(filename) {
    // 构造函数，使用初始化列表正确初始化 filename_
}

int FileAnalyzerWav::extract_bitrate() const {
    std::ifstream file(this->filename_, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << this->filename_ << std::endl;
        return -1;
    }
    // 假设比特率数据在字节偏移 28 处
    file.seekg(28);
    int bitrate = 0;
    file.read(reinterpret_cast<char*>(&bitrate), sizeof(bitrate));
    file.close();
    return bitrate * 8;  // 将字节率转换为比特率
}

int FileAnalyzerWav::extract_channels() const {
    // 如果需要提取声道数的逻辑也在这里实现
    return 2;  // 示例声道数
}
