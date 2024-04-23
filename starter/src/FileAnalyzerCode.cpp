#include "FileAnalyzerCode.h"
#include <stack>
#include <fstream>

bool FileAnalyzerCode::check_parens(const std::string& filename) {
    std::ifstream file(filename);
    std::stack<char> s;
    char ch;
    while (file >> ch) {
        switch(ch) {
            case '(':
            case '[':
            case '{':
                s.push(ch);
                break;
            case ')':
                if (s.empty() || s.top() != '(') return false;
                s.pop();
                break;
            case ']':
                if (s.empty() || s.top() != '[') return false;
                s.pop();
                break;
            case '}':
                if (s.empty() || s.top() != '{') return false;
                s.pop();
                break;
        }
    }
    return s.empty();
}

FileAnalyzerCode::FileAnalyzerCode(const std::string & filename)
{
    std::ifstream file(filename);
    std::stack<char> s;
    char ch;
    while (file >> ch) {
        switch(ch) {
            case '(':
            case '[':
            case '{':
                s.push(ch);
                break;
            case ')':
                if (s.empty() || s.top() != '(') return false;
                s.pop();
                break;
            case ']':
                if (s.empty() || s.top() != '[') return false;
                s.pop();
                break;
            case '}':
                if (s.empty() || s.top() != '{') return false;
                s.pop();
                break;
        }
    }
    return s.empty();
}
