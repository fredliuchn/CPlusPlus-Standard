#include "Requires.h"

#include <type_traits>

namespace RequiresNameSpace
{
    template <typename T>
    concept can_run = requires(T t) {
        std::is_class_v<T>;                     // 类型 T 必须是一个类或结构体
        t();                                    // 必须支持无参调用（括号运算符重载）
        t.run();                                // 必须包含 run 成员函数
        std::is_same_v<decltype(t.run()), int>; // run 函数返回类型必须为 int
    };
    // 使用该 concept 的函数模板
    template <can_run T>
    int func(T t)
    {
        t();
        return t.run(); // 可以直接返回 run() 的结果，因为其返回类型已被限定为 int
    }
    struct A
    {
        void run() {}
    };

    struct B
    {
        void operator()() {}
    };
    struct C
    {
        void operator()() {}
        void run() {}
    };

    struct D
    {
        int operator()() {}
        int run() { return 0; }
    };

    void RequiresExample()
    {
        // func<int>(10); // 错误，int 不是 class 或 struct
        // func<A>(A());  // 错误，缺少括号运算符重载
        // func<B>(B());  // 错误，缺少 run 函数
        // func<C>(C());  // 错误，run 返回类型不是 int
        func<D>(D()); // 正确，满足所有条件
    }
}