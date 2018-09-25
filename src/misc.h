#ifndef _MISC
#define _MISC
#include <unordered_map>
#include <vector>
#include <string>
#include <fstream>

// useful functions that c++ lacks but everyone else has (such as python, R, java, ....)


namespace misc{
    inline bool file_exists (const std::string& name) {
        std::ifstream f(name);
        return f.good();
    }

    inline std::string basename(const std::string& str_path);

    std::string trim(const std::string& str)
    {
        size_t first = str.find_first_not_of(' ');
        if (std::string::npos == first)
        {
            return str;
        }
        size_t last = str.find_last_not_of(' ');
        return str.substr(first, (last - first + 1));
    }
}


#endif
