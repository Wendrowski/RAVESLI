int main()
{
    // ItemType - ��� ������������� ���, ������� �� �������� ����
    // itemType (� ��������� i) - ��� ��� ����������, ������� �� ���������� (���� ItemType)
    // ITEMTYPE_GUN - ��� �������� �������������, ������� �� ��������� ���������� itemType
    ItemType itemType(ITEMTYPE_GUN);

    std::cout << "You are carrying a " << getItemName(itemType) << "\n";

    return 0;
}