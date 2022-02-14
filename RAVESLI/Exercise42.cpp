int main()
{
    // ItemType - это перечисляемый тип, который мы объявили выше
    // itemType (с маленькой i) - это имя переменной, которую мы определили (типа ItemType)
    // ITEMTYPE_GUN - это значение перечислителя, которое мы присвоили переменной itemType
    ItemType itemType(ITEMTYPE_GUN);

    std::cout << "You are carrying a " << getItemName(itemType) << "\n";

    return 0;
}