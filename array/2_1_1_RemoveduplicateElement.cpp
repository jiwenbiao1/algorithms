#include <iostream>
#include <vector>
using namespace std;

int RemoveDuplicateElement(int SortArray[],int arrayLength);
int RemoveDuplicateElement_Vector(std::vector<int>& sortVector);

int main(int argc, char const *argv[])
{

	int TestArray[] = {1,1,2,3,3,4,5,6,6,6,6,6,7};	
	
	//test for RemoveDuplicateElement
	/*int length = RemoveDuplicateElement(TestArray,sizeof(TestArray)/sizeof(int));
	cout << "array implement:\t";
	for (int i = 0; i < length; ++i)
	{
		std::cout<<TestArray[i]<<"\t";
	}*/
	

	std::vector<int> v = std::vector<int>(TestArray,TestArray+sizeof(TestArray)/sizeof(int));
	int length_Vector = RemoveDuplicateElement_Vector(v);
	cout << "\n"<<"vector implement:\t";
	for (std::vector<int>::iterator i = v.begin(); i != (v.begin() + length_Vector); ++i)
	{
		std::cout<<*i << "\t";
	}
	return 0;
}




//template<T>
/*
时间复杂度O(n) 遍历数组耗时
空间复杂度O(1)
return :数组大小
解题步骤：
遍历数组
	1 index存储遍历删除后元素的下标索引
	2 
 */
int RemoveDuplicateElement(int SortArray[],int arrayLength){
	if(arrayLength <= 0)
		return -1;
	int index = 0;
	for (int i = 1; i < arrayLength; ++i)
	{
		if(SortArray[index] != SortArray[i])
			SortArray[++index] =  SortArray[i];
	}
	return index+1;
}

int RemoveDuplicateElement_Vector(std::vector<int>& sortVector){
	if(sortVector.size() <= 0)
		return -1;
	std::vector<int>::iterator index = sortVector.begin();
	for (std::vector<int>::iterator it = sortVector.begin(); it != sortVector.end(); ++it)
	{
		if(*index != *it)
			*(++index) = *it;
	}
	return (int)((index+1) - sortVector.begin() );
}