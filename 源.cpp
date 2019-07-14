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
	//加载图片
	cout << "正在加载..." << endl;
	for (int i = 0; i<148; i++) {
		sprintf_s(filename, "D:\\项目\\控制台上跳极乐净土\\images2\\_%04d_图层-%d.jpg", i, 148 - i);
		loadimage(&images[i], filename);
	}
	initgraph(800, 450);
	mciSendString("play 极乐净土.mp3 repeat", 0, 0, 0);//重复播放音乐
	//输出图片
	while (1) {
		for (int i = 0; i<148; i++) {
			putimage(0, 0, &images[i]);
			Sleep(80);
		}
	}
	return 0;
}