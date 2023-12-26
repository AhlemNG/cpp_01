/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:55:55 by anouri            #+#    #+#             */
/*   Updated: 2023/12/26 17:38:40 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
this main fnction takes 3 parameters
    1- filename(must exist)
    2- string 1
    3- string 2
    
    create a newfile
    copy the content of filename ito newfile while replacing
    every string 1 with string 2


*/
#include<iostream>
#include <fstream>

void    Copy(std::string line, std::ofstream& outfile)
{
    outfile << line << std::endl;
}

void CopyAndReplace(std::string filename, std::string s1, std::string s2)
{
    std::string line;
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
    {
        if (line.find("main") != std::string::npos) /*returns pos or pos max*/
        {
            Copy(line, outfile);
            std::cout << "main found in position: " << line.find("main") << std::endl;
        }
        line.clear();
    }
    infile.close();
    outfile.close();
}

int main(int argc, char *argv[])
{
    // if(argc == 4)
    {
        CopyAndReplace(argv[1], argv[2], argv[3]);
    }
    
    return 0;

}

