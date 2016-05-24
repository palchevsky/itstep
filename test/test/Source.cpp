#include <iostream>
using namespace std;

class TestClass
{
private:
	TestClass() {};
protected:
	void Realloc(int newSize)
	{

	}
public:
	int* m_data = nullptr;
	int m_sizeOfData = 0;

	TestClass(int argu) :m_sizeOfData(argu)
	{
		m_data = (int*)malloc(m_sizeOfData * sizeof(int));
	}
	~TestClass()
	{
		free(m_data);
		int* m_data = nullptr;
		int m_sizeOfData = 0;
	}
};

class TestClassChild : public TestClass
{
public:
	double m_doubleExample;

	TestClassChild() :TestClass(5), m_doubleExample(.08)
	{
		//		TestClass * p = new TestClass();
		m_doubleExample = .09;
	}
};

int main()
{
	TestClass v_t(20);
	TestClassChild v_Child;

	v_t.m_data[8];
	for (auto k = 0; k < v_t.m_sizeOfData; ++k)
	{
		v_t.m_data[k] = k;
	}
	return 0;
}