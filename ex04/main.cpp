/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:55:55 by anouri            #+#    #+#             */
/*   Updated: 2023/12/27 18:02:16 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
/*bonjour main hello main main main helooooooool main*/
std::string replace(std::string const line, std::string s1, std::string s2)
{
    std::string newLine;
    size_t pos = 0;
    size_t found;
    while (pos < line.length())
    {
        if((found = line.find(s1, pos)) != std::string::npos)
        {
            std::cout << found << std::endl;
            newLine += line.substr(pos, found - pos);
            newLine += s2;
            std::cout << newLine << std::endl;
            pos = found + s1.length();
            // newLine += line.substr(pos);
        }
        else
        {
            newLine += line.substr(pos);            
            break;
        }
    }
    return newLine;
}

void CopyAndReplace(std::string filename, std::string s1, std::string s2)
{
    std::string line;
    std::string newLine;
    
    std::ifstream infile(filename); 
    if (!infile)
    {
        std::cerr << "Error opening input file: " << "hh.cpp" << std::endl;
        return;
    }
    std::ofstream outfile("newfile");
    if (!outfile)
    {
        std::cerr << "Error opening output file: newfile" << std::endl;
        return;
    }
    while (infile >> line)
    while(getline (infile, line))
    {
        newLine = replace(line, s1, s2);   
        outfile << newLine << std::endl;
        line.clear();
    }
    infile.close();
    outfile.close();
}

int main(int argc, char *argv[])
{
    if(argc == 4)
    {
        CopyAndReplace(argv[1], argv[2], argv[3]);
    }
    return 0;
}
