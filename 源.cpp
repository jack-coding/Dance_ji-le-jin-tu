#include<iostream>
#include<graphics.h>
#include<MMSystem.h>
#include<Windows.h>
#include<WinBase.h>
#pragma comment(lib, "winmm.lib")
#define  _CRT_SECURE_NO_WARNINGS 
using namespace std;
int main()
{
	IMAGE images[148];
	char filename[128];
	//����ͼƬ
	cout << "���ڼ���..." << endl;
	for (int i = 0; i<148; i++) {
		sprintf_s(filename, "D:\\��Ŀ\\����̨�������־���\\images2\\_%04d_ͼ��-%d.jpg", i, 148 - i);
		loadimage(&images[i], filename);
	}
	initgraph(800, 450);
	mciSendString("play ���־���.mp3 repeat", 0, 0, 0);//�ظ���������
	//���ͼƬ
	while (1) {
		for (int i = 0; i<148; i++) {
			putimage(0, 0, &images[i]);
			Sleep(80);
		}
	}
	return 0;
}