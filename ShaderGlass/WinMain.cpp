#include "pch.h"

#include "resource.h"
#include "ShaderWindow.h"
#include "ParamsWindow.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    if(!winrt::Windows::Foundation::Metadata::ApiInformation::IsApiContractPresent(L"Windows.Foundation.UniversalApiContract", 8))
    {
        MessageBox(NULL, L"ShaderGlass requires Windows 10 version 1903 or later.", L"ShaderGlass", MB_OK | MB_ICONERROR);
        return -1;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_SHADERGLASS));
    MSG    msg;

    INITCOMMONCONTROLSEX ccs;
    ccs.dwICC = ICC_WIN95_CLASSES;
    ccs.dwSize = sizeof(ccs);
    InitCommonControlsEx(&ccs);

    CaptureManager captureManager;
    ShaderWindow   shaderWindow(captureManager);
    if(!shaderWindow.Create(hInstance, nCmdShow))
    {
        return FALSE;
    }

    ParamsWindow paramsWindow(captureManager);
    if(!paramsWindow.Create(hInstance, SW_HIDE))
    {
        return FALSE;
    }

    shaderWindow.Start(lpCmdLine, paramsWindow.m_mainWindow);

    while(GetMessage(&msg, nullptr, 0, 0))
    {
        if(!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int)msg.wParam;
}