#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int main()
{
	int n = 9;
	float *p = (float *)&n;
	printf("n��ֵΪ��%d\n", n);//9
	//�Ը����ʹ洢ȥȡ����
	//9�Ķ�����Ϊ0000 0000 0000 0000 0000 0000 0000 1001
	//ȥ������λ0����8λָ��λ����0��EȫΪ0�������ȡ������������0��һ����
	printf("*p��ֵΪ��%f\n", *p);//0.000000

	*p = 9.0;
	//��9.0�Ķ������Ը����ʹ���*p
	//1001.0 -> 1.0010*2^3
	//0 1000 0010 0010 0000 0000 0000 0000 000�������ʹ洢��
	printf("n��ֵΪ��%d\n", n);//�������Ĵ洢ȥ��������õ���1091567616
	printf("*p��ֵΪ��%f\n", *p);//�Ը������Ĵ洢ȥ��������õ���9.0
	system("pause");
	return 0;
}