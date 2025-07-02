#include <iostream>
#include <fstream>
#include <string>

std::string replace_all(std::string text, const std::string& search, const std::string& replace)
{
    size_t pos = text.find(search, pos);
	while (pos != std::string::npos)
	{
		text.replace(pos, search.length(), replace);
		pos = text.find(search, pos + replace.length());
	}
    return text;
}

int main(int argc, char* argv[])
{
    if (argc != 4)
	{
        std::cerr << "Usage: ./replace <filename> <search> <replace>\n";
        return 1;
    }

    std::string filename = argv[1];
    std::string search = argv[2];
    std::string replace = argv[3];

    std::ifstream infile(filename);
    if (!infile)
	{
        std::cerr << "Error opening input file.\n";
        return 1;
    }

    std::ofstream outfile(filename + ".replace");
    if (!outfile)
	{
        std::cerr << "Error creating output file.\n";
        return 1;
    }

    std::string line;
    while (std::getline(infile, line))
	{
        outfile << replace_all(line, search, replace) << '\n';
    }

    return 0;
}
