#include <windows.h>
#include <stdio.h>

//���� �� �������� ����� ��������� #1
//�� ������ ��� ��� ������� ������������
//�������� tu ������ ���� ��������, �.�. tu = 127
//�� ����� ��� ������������� ���������������
//�������� tu = 8.0

int main() 
{
	int x1 = 1;
	int x2 = 201;

	float z1 = 1.0f;
	float z2 = 10.0f;

	float tu1 = 0.0f;
	float tu2 = 255.0f;

	float iz1 = 1 / z1;
	float iz2 = 1 / z2;

	float diz = (iz2 - iz1 ) / (x2 - x1);

	float itu1 = tu1 / z1;
	float itu2 = tu2 / z2;

	float ditu = (itu2 - itu1) / (x2 - x1);

	float iz = iz1;
	float itu = itu1;
	
	for (int  x = x1; x <= x2; x++ )
	{
		float z = 1 / iz;
		float tu = itu * z;

		//������� x ����� 100, �������� ����� 50
		if(x == 50)
			//��� ��������� ����� �������� #1
			int debug = 0;

		iz += diz;
		itu += ditu;
	}

    return 0;
}
