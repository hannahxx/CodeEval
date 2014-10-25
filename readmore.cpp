/*Sample code to read in test cases:
ifstream file;
file.open(argv[1])
while (!file.eof()) 
   {
       getline(file, lineBuffer);
       if (lineBuffer.length() == 0)
           continue; //ignore all empty lines
       else 
       {
           //do something here
       }
}*/
#include <iostream>
#include <fstream>
#include <string>

void longSentence(std::string str);

int main(int argc, char* argv[]){

	std:: ifstream is;
	//is.open(argv[1]);
	is.open("input.txt");
	std:: string str;
	

	while(!is.eof()){
		
		getline(is,str);
	
		if(str.length() > 55){
			if(str.length()>300)
				continue;
			
			longSentence(str);
		
		}
			else{
			std::cout<<str;
		}
			std::cout<<std::endl;
	}
	return 0;
}

void longSentence(std::string str){
	
 int max = 40;
	char c;
	
	if(str.at(max) != ' '){ 
			str.resize(max);
			
			if(str.find(' ') != std::string::npos){
				
				str.resize(str.rfind(' '));
				}
			else{
					str.resize(max);
					}
			}
	else{
			str.resize(max);
		}
		std::cout<<str<<"... <Read More>";
	
	}


