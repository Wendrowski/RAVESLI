
uint_least32_t en0x()
{
    std::cout << "Hy! "; uint_least64_t rValue{}; std::cin >> std::hex >> rValue; std::cin.ignore(32767, '\n');
    return rValue;
}
int main()
{
    using namespace ToolFor; SetConsoleCP(1251); SetConsoleOutputCP(1251); using std::cout; using std::endl; using std::cin; using std::bitset;

    cout << "программа управления цветами пикселя (инициализируйте его значением 0x0) " << endl;
    bitset<32> pix{ en0x() };
    cout << "начальное состояниие..." << pix << endl;
    cout << "сперва выбираем степень непрозрачности от " << static_cast<uint_least32_t>(A1) + 1 << " до " << static_cast<uint_least32_t>(A8) + 1 << endl;
    uint_least32_t proz{ en0x() };
    cout << "прозрачность задана...." << proz << endl;

    for (uint_least32_t poz{ static_cast<uint_least32_t>(A1) }; poz < proz; ++poz)
        pix.set(poz);
    cout << pix << endl;
    cout << "теперь задаём цветa и силу их свечения - ШЕСТНАДЦАТЕРИЧНЫМ ЗНАЧЕНИЕМ !\n";
    cout << "синий от " << static_cast<uint_least32_t>(B1) + 1 << " до " << static_cast<uint_least32_t>(B8) + 1 << endl;
    cout << "зелёный от " << static_cast<uint_least32_t>(G1) + 1 << " до " << static_cast<uint_least32_t>(G8) + 1 << endl;
    cout << "красный от " << static_cast<uint_least32_t>(R1) + 1 << " до " << static_cast<uint_least32_t>(R8) + 1 << endl;
    uint_least64_t blue{ en0x() }, green{ en0x() }, red{ en0x() };

    for (uint32_t poz{ static_cast<uint32_t>(B1) }; poz < blue; ++poz)
        pix.set(poz);
    for (uint32_t poz{ static_cast<uint32_t>(G1) }; poz < green; ++poz)
        pix.set(poz);
    for (uint32_t poz{ static_cast<uint32_t>(R1) }; poz < red; ++poz)
        pix.set(poz);
    cout << pix;
    return 0;
}