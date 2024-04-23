#ifndef FILE_ANALYZER_CODE_H
#define FILE_ANALYZER_CODE_H

#include <string>

class FileAnalyzerCode {
public:
    explicit FileAnalyzerCode(const std::string& filename);
    bool check_parens();

private:
    std::string filename;
};

#endif // FILE_ANALYZER_CODE_H
