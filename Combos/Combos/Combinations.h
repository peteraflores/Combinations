#pragma once
#include <vector>
#include <iostream>

class Combinations
{
public:

	Combinations();
	~Combinations();
	template <typename T>
	void FindAll(std::vector <T> set, int size) {
		std::vector<int> temp;
		
		//Populate temp with the selection size
		for (int i = 0; i < size; i++) {
			temp.push_back(i);
		}
		print_set(temp,set);

		int setMax = set.size() - 1;
		int tempMax = size - 1;
		int curPos = size - 1;
		for (int i = 0; i < Amount(set, size); i++){
			

			//Checking if the current position isn't at its max value
			if (temp[curPos] != setMax - (tempMax - curPos)) {

				temp[curPos] ++;
				int adder = 1;

				//Make all following positions have ascending values
				for (int ii = curPos + 1; ii < size; ii++) {
					temp[ii] = temp[curPos] + adder;
					adder++;
				}

				print_set(temp,set);
				
				
			}
			else {
				do {
					//Move to the next position(if we aren't in the last one)
					if (curPos != 0) {
						curPos--;
					}

					//Hmmm... this looks familiar
					if (temp[curPos] != setMax - (tempMax - curPos)) {

						temp[curPos] ++;
						//Make all following positions have ascending values
						int adder = 1;
						for (int ii = curPos + 1; ii < size; ii++) {
							temp[ii] = temp[curPos] + adder;
							adder++;
						}

						print_set(temp,set);
						curPos = tempMax;


					}
					


				} while (curPos != tempMax);
				
				

				
			}
		}


	};

	int factorial(int num);
	template<typename T>
	int Amount(std::vector<T> set,int size) {
		return factorial(set.size()) / factorial(size) * factorial(set.size() - size);
	}

private:
	template <typename T>
	void print_set(std::vector<int> temp,std::vector<T>set ) {
		for (unsigned int i = 0; i < temp.size(); i++) {
			int index = temp[i];
			std::cout << set[index];
		}
		std::cout << std::endl;
	}

};

