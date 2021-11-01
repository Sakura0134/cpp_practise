#include <iostream>

int main(int argc, char** argv){
	long int i = 1, sum = 1, sum_even = 0;
	while(sum <= 4000000){

		if (sum % 2 == 0){
			sum_even += sum;
		}

		long int temp = i;
		i = sum;
		sum += temp;
	}
	std::cout<<"Sum: "<<sum_even;
	return 0;
}