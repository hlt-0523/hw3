#ifndef FILEANALYZERWAV_H
#define FILEANALYZERWAV_H

#include <string>

class FileAnalyzerWav {
private:
    std::string filename_;  // 添加成员变量声明

public:
    explicit FileAnalyzerWav(const std::string& filename);
    int extract_bitrate() const;
    int extract_channels() const;
};

#endif
