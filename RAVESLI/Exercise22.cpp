#include <iostream>
#include <Windows.h>
#include <cstdint>
#include <stdint.h>
#include <bitset>
#include "ToolFor.h"

uint64_t enNum()
{
    std::cout << "Hy! "; unsigned int pixel{}; std::cin >> std::hex >> pixel; return pixel;
}

int main() {
    SetConsoleCP(1251); SetConsoleOutputCP(1251); using std::cout; using std::endl; using std::cin; using std::bitset;
    cout << "��������� ������� ��� �������� : �������� �������� (��������������� ��� ��������� 0x0) " << endl;
    bitset<32> colors{ enNum() };
    cout << "�������� ���� ������..." << colors << endl;
    cout << " �������� ������� ����:";
    colors.set(ToolFor::A1);
    colors.set(ToolFor::A2);
    colors.set(ToolFor::A3);
    colors.set(ToolFor::A4);
    colors.set(ToolFor::A5);
    colors.set(ToolFor::A6);
    colors.set(ToolFor::A7);
    colors.set(ToolFor::A8);
    colors.set(ToolFor::R25);
    colors.set(ToolFor::R26);
    colors.set(ToolFor::R27);
    colors.set(ToolFor::R28);
    colors.set(ToolFor::R29);
    colors.set(ToolFor::R30);
    colors.set(ToolFor::R31);
    colors.set(ToolFor::R32);
    cout << colors << endl;
    cout << "����� ����� � ��� �� ����, �� ����� ���-�� ����� ��� ����� ����� ������������ ����� �\n";
    cout << "��������� ^, &, |, ~, � ����� ���� for(��� ���������� ��������) - ����� ������� ���...";
    return 0;
}