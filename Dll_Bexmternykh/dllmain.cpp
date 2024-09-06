// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "pch.h"
#include "windows.h"
//__declspec(dllexport) void __cdecl TestHello(void);
BOOL WINAPI DllMain( HINSTANCE hDll,
                       DWORD  dwReason,
                       LPVOID lpReserved
                     )
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		MessageBox(NULL, "The DLL is loaded", "DLL Skeleton", MB_OK);
		break;
	case DLL_THREAD_ATTACH:
		MessageBox(NULL, "A thread is created in this process", "DLL Skeleton", MB_OK);
		break;
	case DLL_THREAD_DETACH:
		MessageBox(NULL, "A thread is destroyed in this process", "DLL Skeleton", MB_OK);
		break;
	case DLL_PROCESS_DETACH:
		MessageBox(NULL, "The DLL is unloaded", "DLL Skeleton", MB_OK);
		break;
	}
	return TRUE;
}
extern "C"
extern "C" int count = -5;
extern "C" int Add(int n)
{
	count += n;
	return count;
}
extern "C" int Sub(int n)
{
	count -= n;
	return count;
}
