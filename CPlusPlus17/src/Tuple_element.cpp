
#include <tuple>
#include <string>
#include <iostream>

namespace Tuple_elementNameSpace
{
    class MyType
    {
    public:
        int a = 1;
        double b = 2.0;
        std::string c = "Three";
    };
    // 提供 get<N>() 函数模板
    template <std::size_t N>
    decltype(auto) get(const MyType &mt)
    {
        if constexpr (N == 0)
            return mt.a;
        else if constexpr (N == 1)
            return mt.b;
        else
            return mt.c;
    }
    void Tuple_elementExample()
    {
        MyType mt;
        // 使用 get<N>() 函数模板获取 MyType 的成员
        int a = get<0>(mt);
        double b = get<1>(mt);
        std::string c = get<2>(mt);

        // 输出结果
        std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
    }
    // 使用 std::tuple_size 和 std::tuple_element 特化 MyType
}
// 特化 tuple_size
namespace std
{
    template <>
    struct tuple_size<Tuple_elementNameSpace::MyType> : std::integral_constant<std::size_t, 3>
    {
    };
}
// 特化 tuple_element
namespace std
{
    template <>
    struct tuple_element<0, Tuple_elementNameSpace::MyType>
    {
        using type = int;
    };
    template <>
    struct tuple_element<1, Tuple_elementNameSpace::MyType>
    {
        using type = double;
    };
    template <>
    struct tuple_element<2, Tuple_elementNameSpace::MyType>
    {
        using type = std::string;
    };
}