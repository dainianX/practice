using System;
using System.ValueTuple;
class MeanTool
{
    public static void Main()
    {
        double meanResult = Mean(10, 20, 30);
        Console.WriteLine("Mean Value: " + meanResult);
        
        double a = 10, b = 20, c = 30;
        double max1, min1, avg1;
        Values1(ref a, ref b, ref c, out max1, out min1, out avg1);
        Console.WriteLine("Using ref parameters:");
        Console.WriteLine("Max Value: " + max1);
        Console.WriteLine("Min Value: " + min1);
        Console.WriteLine("Average Value: " + avg1);
        
        double max2, min2, avg2;
        Values2(out double aOut, out double bOut, out double cOut, out max2, out min2, out avg2);
        Console.WriteLine("\nUsing out parameters:");
        Console.WriteLine("Max Value: " + max2);
        Console.WriteLine("Min Value: " + min2);
        Console.WriteLine("Average Value: " + avg2);

        // Test Tuple function
        
    }
    // 输入3个参数值，返回其算术平均值
    public static double Mean(double a, double b, double c)
    {
        return (a + b + c) / 3;
    }
    
    // 输入3个参数值，使用ref参数，输出最大值、最小值、平均值。
    public static void Values1(ref double a, ref double b, ref double c, out double max, out double min, out double avg)
    {
        max = Math.Max(Math.Max(a, b), c);
        min = Math.Min(Math.Min(a, b), c);
        avg = (a + b + c) / 3;
    }
    // 输入3个参数值，使用out参数，同样输出最大值、最小值、平均值。
    public static void Values2(out double a, out double b, out double c, out double max, out double min, out double avg)
    {
        a = 10;
        b = 20;
        c = 30;
        
        max = Math.Max(Math.Max(a, b), c);
        min = Math.Min(Math.Min(a, b), c);
        avg = (a + b + c) / 3;
    }
    // 输入n个参数，采用元组返回最大值、最小值、平均值。
    public static (double max, double min, double avg) Tuple(double[] values)
    {
        double max = values[0];
        double min = values[0];
        double sum = values[0];

        for (int i = 1; i < values.Length; i++)
        {
            if (values[i] > max)
            {
                max = values[i];
            }
            if (values[i] < min)
            {
                min = values[i];
            }
            sum += values[i];
        }

        double avg = sum / values.Length;

        return (max, min, avg);
    }
}