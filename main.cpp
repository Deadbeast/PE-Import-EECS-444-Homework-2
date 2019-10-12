#include <string>
#include <iostream>
#include <stdio.h>
#include <fstream>

void update(char *);


int main() {
   
    char a[50]= "C:/PE-1.txt";
    char *f=a;
    bool flag = 0;
   
   std::ifstream ifile(f);
   if((bool)ifile == true)
   flag=1;
   else
   flag=0;
      
    if (flag == 1){
    update(a);
	}
	else{
	std::ofstream fout; 
	fout.open(f);
	fout<<"I want to learn PE file format!\n";
	fout.close();
	}
    return 0;
}

void update(char *filename){

bool file_flag = false;

std::string line;
std::string comp_line = "I want to learn PE file format!";
std::ifstream myfile (filename);
if (myfile.is_open())
{
    while ( getline (myfile,line) )
    {
      
	  if (line == comp_line){
	  myfile.close();
      file_flag=1;
 	}
    }
    myfile.close();
  }
  
if (file_flag == true){
std::string line;
  std::ifstream myfile (filename);
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      std::cout << line << '\n';
    }
    myfile.close();
  }
}else{
std::ofstream fout; 
fout.open(filename,std::ofstream::app);
fout<<"I want to learn PE file format!\n";
fout.close();
}
}


