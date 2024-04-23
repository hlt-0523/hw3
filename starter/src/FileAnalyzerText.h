#ifndef FILEANALYZERTEXT_H
#define FILEANALYZERTEXT_H

#include <string>
#include <map>
#include <vector>

class FileAnalyzerText {
private:
    std::string filename_;  // 添加成员变量声明

public:
    explicit FileAnalyzerText(const std::string& filename);
    std::string find_most_common_word();
    std::map<char, int> count_letters() const;
    std::vector<std::pair<char, int>> count_letters_sorted() const;  // 注意 const
};

#endif
