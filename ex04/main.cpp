/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:04:16 by anouri            #+#    #+#             */
/*   Updated: 2024/01/03 16:00:31 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
/*main bonjour main hello main main main heloooooooo main*/
std::string replace(std::string const line, std::string s1, std::string s2)
{
    std::string newLine;
    size_t pos = 0;
    size_t found;

    while (pos < line.length())
    {
        if((found = line.find(s1, pos)) != std::string::npos)
        {
            newLine += line.substr(pos, found - pos);
            newLine += s2;
            pos = found + s1.length();
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
    
    std::ifstream infile(filename.c_str()); 
    if (!infile.is_open())
    {
        std::cerr << "Error opening input file: " << filename << std::endl;
        return;
    }
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error opening output file: newfile.replace" << std::endl;
        return;
    }
    while(std::getline(infile, line))
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
    if(argc != 4)
    {
        std::cout << "wrong arguments number" << std::endl;
        return(1);
    }
    if (std::string(argv[2]).empty())
    {
        std::cout << "EROOR, empty string" << std::endl;
        return(1);
    }
    CopyAndReplace(argv[1], argv[2], argv[3]);
    return 0;
}