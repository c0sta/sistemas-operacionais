#include <windows.h>
#include <stdio.h>

void main(void)

{

	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	/*
		Inicio o processo filho 
		E passo o caminho do executável do Paint para o método CreateProcess da lib windows.h
	*/ 
	if (!CreateProcess(L"C:\\WINDOWS\\system32\\mspaint.exe", // module name which is the Windows cmd command
		NULL, // Command line
		NULL, // Process handle not inheritable.
		NULL, // Thread handle not inheritable
		FALSE, // Set handle inheritance to FALSE.
		0, // No creation flags.
		NULL, // Use parents environment block.
		NULL, // Use parents starting directory.
		&si, // Pointer to STARTUPINFO structure.
		&pi) // Pointer to PROCESS_INFORMATION structure
		)
		printf("\n Falha ao criar o Processo! \n\n");
	else
		printf("\nProcesso criado! \n\n");

	// Aguarda o fim do processo filho (em milissegundos)
	WaitForSingleObject(pi.hProcess, INFINITE);   

	// Fecha o processo e o handler da thread
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
}