#include <iostream>
using namespace std;

//���������� ����������
struct ResistsConstr
{
	int ice;
	int fire;
	int pois;
	int light;
};
//������� ��������� �������� ������������� � ���������� �� � ���� ���������� overallRes
long package_resists(unsigned int IceR, unsigned int FireR, unsigned int PoisR, unsigned int LightR)
{
	std::cout << "Input IceResist  " << static_cast<unsigned int>(IceR) << std::endl;
	std::cout << "Input FireResist " << static_cast<unsigned int>(FireR) << std::endl;
	std::cout << "Input PoisResist " << static_cast<unsigned int>(PoisR) << std::endl;
	std::cout << "Input LightResist " << static_cast<unsigned int>(LightR) << std::endl;

	IceR <<= 24; //����� ��������� ��������� ���������� ������������ �������� �������������
	FireR <<= 16; //�� ������ ���������� � ������� ���������� ������ �����, � �������
	PoisR <<= 8;  //���������������� ��������� ���������� ������� ����� iceRMask fireRMask poisRMask lightRMask
	LightR;	    //� ������ ��� �������������, ������ ��������� ��� ������

	unsigned int overallRes = 0;              //��������������� ��������� 0000 0000 0000 0000 0000 0000 0000 0000
	overallRes = IceR | FireR | PoisR | LightR; //��������� \��� ����������� ������� � ���� ����������
											  //��� �������� ����� ���������� � ������ ���������� ������, �� ����������
											  //���� �������� ��������(iceR,fireR,poisR,lightR �� ����������� 
											  //�� ������� 255

	std::cout << "IceResist after Bit Shift " << static_cast<unsigned int>(IceR) << std::endl;
	std::cout << "FireResist after Bit Shift " << static_cast<unsigned int>(FireR) << std::endl;
	std::cout << "PoisResist after Bit Shift " << static_cast<unsigned int>(PoisR) << std::endl;
	std::cout << "LightResist after Bit Shift " << static_cast<unsigned int>(LightR) << std::endl;
	std::cout << "overallRes as decimal value is " << static_cast<unsigned int>(overallRes) << std::endl;

	return  overallRes; //���������� ����� �������������
}
//������� ��������������� ������������ �������� �������� �������� �� ����� ����������
void restore_resists(unsigned int overallRes)
{
	const unsigned  int iceRMask = 0xFF000000;//����� ��� �������� ���-��: 1111 1111 0000 0000 0000 0000 0000 0000
	const unsigned  int fireRMask = 0x00FF0000;//����� ��� �����.   ���-��: 0000 0000 1111 1111 0000 0000 0000 0000
	const unsigned  int poisRMask = 0x0000FF00;//����� ��� �������� ���-��: 0000 0000 0000 0000 1111 1111 0000 0000
	const unsigned  int lightRMask = 0x000000FF;//����� ��� ����.��� ���-��: 0000 0000 0000 0000 0000 0000 1111 1111

	std::cout << "decimalvalue of iceRMask 0xFF000000 is " << static_cast<unsigned int>(iceRMask) << std::endl;
	std::cout << "decimalvalue of fireRMask 0x00FF0000 is " << static_cast<unsigned int>(fireRMask) << std::endl;
	std::cout << "decimalvalue of poisRMask 0x0000FF00 is " << static_cast<unsigned int>(poisRMask) << std::endl;
	std::cout << "decimalvalue of lightRMask 0x000000FF is " << static_cast<unsigned int>(lightRMask) << std::endl;

	unsigned int IceR;
	unsigned int FireR;
	unsigned int PoisR;
	unsigned int LightR;
	//����� ����� ���� �������� ����� %(������� � ��������)
	//� ����������� ���������� ���� ����������� �������� �������� ���
	IceR = (overallRes & iceRMask) >> 24;  // (overallRes & iceRMask)>>24
	FireR = (overallRes & fireRMask) >> 16; // (overallRes & fireRMask)>>16-UserIceR;
	PoisR = (overallRes & poisRMask) >> 8;  // (overallRes & poisRMask)>>8-UserFireR-UserIceR;
	LightR = (overallRes & lightRMask);    // (overallRes & lightRMask)-UserPoisR-UserIceR-UserFireR;

	std::cout << "Initial IceR " << static_cast<unsigned int>(IceR) << std::endl;
	std::cout << "Initial FireR " << static_cast<unsigned int>(FireR) << std::endl;
	std::cout << "Initial PoisR " << static_cast<unsigned int>(PoisR) << std::endl;
	std::cout << "Initial LightR " << static_cast<unsigned int>(LightR) << std::endl << "\n";
}
//��������� �������� �� ���������� ������ � ���������� ��  ���������
ResistsConstr input_resists()
{
	int ice;
	int fire;
	int pois;
	int light;

	cout << "Enter Ice resist in the range from 0 to 255" << endl;
	cin >> ice;
	cout << "ice is " << ice << endl;

	cout << "Enter fire resist in the range from 0 to 255" << endl;
	cin >> fire;
	cout << "fire is " << fire << endl;

	cout << "Enter pois resist in the range from 0 to 255" << endl;
	cin >> pois;
	cout << "pois is " << pois << endl;

	cout << "Enter light resist in the range from 0 to 255" << endl;
	cin >> light;
	cout << "light is " << light << endl << "\n";

	ResistsConstr monsterRes = { ice,fire,pois,light };//���������� �������� � ���������
	return monsterRes;
}
int main()
{
	int res_Ice; //������������ ����
	int res_Fire; //������������� ����
	int res_Pois; //������������� ����������
	int res_Light; //������������ ������ */
	unsigned int overallRes;//���������� ��� ��������� ���� ������������� � �����

	ResistsConstr monster1_Res = input_resists(); //���� �������� ������������� ��� 1�� ������� � monster1_Res
	ResistsConstr monster2_Res = input_resists(); //���� �������� ������������� ��� 2�� ������� � monster2_Res

	//���������� �������� ice,fire,pois,light 1�� ������� �� ���������� monster1_Res,
	//�������� �� � ������� � ��������� �������, ����������� � 1 ����������
	//� ������������ �� ���������� overallRes
	overallRes = package_resists(monster1_Res.ice, monster1_Res.fire, monster1_Res.pois, monster1_Res.light);
	restore_resists(overallRes);//�������� ������ ������������� ������� ��� ���������� ��� � ��������������� ��������

	overallRes = package_resists(monster2_Res.ice, monster2_Res.fire, monster2_Res.pois, monster2_Res.light);
	restore_resists(overallRes);

	return 0;
}