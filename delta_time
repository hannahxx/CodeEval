#include<iostream>
#include<fstream>
#include<string>

int compare(int a, int b);
void print(int *res);
void atoi(int *arr1, int *arr2, std::string str);

int main(int argc, char* argv[]){

	std:: ifstream is;
	is.open("input.txt");
	//is.open(argv[1]);

	while(!is.eof()){
	std:: string str;
	getline(is,str);

	int arr1[3], arr2[3], res[3];
	int temp;

	atoi(arr1,arr2,str);
	
	int max[3], min[3];
	
	int num = 0;
	while(num <= 2){
 switch(compare(arr1[num],arr2[num])){

 case 1:
	 for(int i = 0; i < 3; i++){
		 max[i] = arr1[i];
		 min[i] = arr2[i];
	 }
	 num = 4;
	 break;

 case 2:
	 	 for(int i = 0; i < 3; i++){
		 max[i] = arr2[i];
		 min[i] = arr1[i];
	 }
	 num = 4;
	 break;

 case -1:
	 num++;
	 	for(int i = 0; i < 3; i++){
		 max[i] = arr2[i];
		 min[i] = arr1[i];
	 }
	 break;

 }
	}	
	
	for(int num = 2; num >= 0; num--){
		temp = max[num] - min[num];
		
		if(temp < 0){
			max[num-1]--;
			temp += 60;
		
		  }
			res[num] = temp;
	}
	
	print(res);

	}
	return 0;
}

int compare(int a, int b){

	if(a > b){
		return 1;
	}
	else if(a == b){
		return -1;
	}
	else{
		return 2;
	}

}

void print(int * res){

	if(res[0] <10)
		std::cout<<'0';
	std::cout<<res[0]<<':';
	if(res[1] <10)
		std::cout<<'0';
	std::cout<<res[1]<<':';
	if(res[2] < 10)
		std::cout<<'0';
	std::cout<<res[2]<<std::endl;

}

void atoi(int *arr1, int*arr2, std::string str){

	arr1[0] = atoi(str.data());
	str.erase(0,3);
	arr1[1] = atoi(str.data());
	str.erase(0,3);
	arr1[2] = atoi(str.data());
	
	str.erase(0,3);
	arr2[0] = atoi(str.data());
	str.erase(0,3);
	arr2[1] = atoi(str.data());
	str.erase(0,3);
	arr2[2] = atoi(str.data());



}
