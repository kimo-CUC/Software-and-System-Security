#include <stdio.h>
#include <Urlmon.h>
#include <stdlib.h>
#pragma comment(lib,"Urlmon.lib")

int main()
{
	if (URLDownloadToFileA(NULL, "https://dldir1.qq.com/weixin/Windows/WeChatSetup.exe", "e:\\test.exe", 0, 0) == S_OK)
	{
		printf("URLDownloadToFile OK\n");
		system("e:\\test.exe");
	}
	else
	{
		printf("URLDownloadToFile Fail,Error:%d\n", GetLastError());
	}
}