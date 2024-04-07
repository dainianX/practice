using System;
struct SomeVal { public int x; }
class SomeRef { public int x; }
class SomeRef2 { public SomeVal val; }
struct SomeVal3 { public SomeRef rf; }
class Program
{
    public static void Main()
    {
        SomeVal v1; //有没有分配空间？分配在哪里（堆/栈）？ 有，栈      
        // Console.WriteLine(v1); //能运行吗?为什么？  不能，没有赋值     
        v1.x = 100; //能运行吗?为什么？  可以     
        Console.WriteLine(v1.x); //能运行吗?为什么？ 可以      
        v1 = new SomeVal();//有没有分配空间？分配在哪里（堆/栈）？       
        Console.WriteLine(v1.x); //输出:       
        v1.x = 5;
        Console.WriteLine(v1.x); //输出:       
    
        SomeRef r1;//有没有分配空间？分配在哪里（堆/栈）？       
        // Console.WriteLine(r1); //能运行吗?为什么？       
        // r1.x = 100;
        // Console.WriteLine(r1.x); //能运行吗?        
        r1 = new SomeRef();//有没有分配空间？分配在哪里（堆/栈）？       
        Console.WriteLine(r1.x); // 输出:       
        r1.x = 5;
        Console.WriteLine(r1.x); // 输出:       

        SomeVal v2 = v1;
        SomeRef r2 = r1;
        v1.x = 9;
        r1.x = 8;
        Console.WriteLine(r1.x); // 输出:       
        Console.WriteLine(r2.x); // 输出:       
        Console.WriteLine(v1.x); // 输出:       
        Console.WriteLine(v2.x); // 输出:       

        SomeRef2 sf2_1 = new SomeRef2();//sf2_1空间分配在哪里（堆/栈）？       
        SomeVal sv2_1 = sf2_1.val;//sv2_1空间分配在哪里（堆/栈）？       
        SomeRef2 sf2_2 = new SomeRef2();
        SomeVal sv2_2 = sf2_2.val;
        Console.WriteLine($"两个类实例相等吗？{sf2_1.Equals(sf2_2)}");// 输出:       
        Console.WriteLine($"两个结构实例相等吗？{sv2_1.Equals(sv2_2)}");// 输出:       

        SomeVal3 sv3_1 = new SomeVal3();
        SomeVal3 sv3_2 = new SomeVal3();
        Console.WriteLine($"{sv3_1.rf == null} {sv3_2.rf == null}");// 输出:       
        Console.WriteLine($"两个结构实例相等吗？{sv3_1.Equals(sv3_2)}");// 输出:       
        sv3_1.rf = new SomeRef();
        sv3_2.rf = new SomeRef();
        Console.WriteLine($"两个类实例相等吗？{sv3_1.rf.Equals(sv3_2.rf)}");// 输出:       
    }
}