#include "FileAnalyzerText.h"
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cctype>

FileAnalyzerText::FileAnalyzerText(const std::string& filename) : filename_(filename) {}

std::string FileAnalyzerText::find_most_common_word() {
    std::ifstream file(filename_);
    std::map<std::string, int> word_counts;
    std::string word;
    while (file >> word) {
        // Add cleaning and processing of word
        ++word_counts[word];
    }
    std::string most_common;
    int max_count = 0;
    for (const auto& pair : word_counts) {
        if (pair.second > max_count) {
            most_common = pair.first;
            max_count = pair.second;
        }
    }
    return most_common;
}

std::map<char, int> FileAnalyzerText::count_letters() const {
    std::ifstream file(filename_);
    std::map<char, int> counts;
    char ch;
    while (file >> std::noskipws >> ch) {
        if (std::isalpha(ch)) {
            counts[std::tolower(ch)]++;
        }
    }
    return counts;
}

std::vector<std::pair<char, int>> FileAnalyzerText::count_letters_sorted() const {
    auto counts = count_letters();
    std::vector<std::pair<char, int>> sorted(counts.begin(), counts.end());
    std::sort(sorted.begin(), sorted.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });
    return sorted;
}
