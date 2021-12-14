/*
    A finicky class that protests using static_assert
    when istantiated for type int
*/
template <typename T>
class EverythingButInt
{
public:
    EverythingButInt();
    {
        static_assert(sizeof(T) != sizeof(int), "No int please!");
    }
};

int main()
{
    EverythingButInt<int> test; // template instantiation with int
    return 0;
}
