/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:06:37 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 09:58:58 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ReplaceAll.hpp>

std::string replaceAll(const std::string &str, const std::string &s1, const std::string &s2)
{
    std::string result;
    size_t pos = 0, prevPos = 0;

    while ((pos = str.find(s1, pos)) != std::string::npos)
    {
        result.append(str, prevPos, pos - prevPos);
        result.append(s2);
        pos += s1.length();
        prevPos = pos;
    }
    result.append(str, prevPos, str.length() - prevPos);
    return result;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::ifstream inputFile;
    std::ofstream outputFile;
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string outputFilename = filename;
    outputFilename.append(".replace");
    std::string inputContent;

    inputFile.open(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Unable to open file '" << filename << "'" << std::endl;
        return 2;
    }
    while (!inputFile.eof())
    {
        std::string line;
        getline(inputFile, line);
        inputContent.append(line);
        inputContent.append("\n");
    }
    inputFile.close();

    outputFile.open(outputFilename.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Unable to create file '" << outputFilename << "'" << std::endl;
        return 3;
    }
    outputFile << replaceAll(inputContent, s1, s2);
    outputFile.close();
}