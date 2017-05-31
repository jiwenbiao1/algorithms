#include <iostream>
//int RemoveDuplicateElement(int SortArray[],int arrayLength);

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

int main(int argc, char const *argv[])
{

	int TestArray[] = {1,1,2,3,3,4,5,6,6,6,6,6,7};	
	int length = RemoveDuplicateElement(TestArray,sizeof(TestArray)/sizeof(int));
	for (int i = 0; i < length; ++i)
	{
		std::cout<<TestArray[i]<<"\t";
	}
	return 0;
}
