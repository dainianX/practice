using System;
using System.Diagnostics;
using static System.Console;

namespace ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] testArray = new int[10];
            Random rd = new Random();
            for (int i = 0; i < testArray.Length; i++)
            {
                testArray[i] = rd.Next(10);
                Debug.WriteLine($"{testArray[i]} ");
            }
            int maxVal = Maxima(testArray, out int[] maxValIndices);
            
            Debug.Assert(maxVal >= testArray[0], "找到最大值了");
            foreach (int index in maxValIndices)
            {
                WriteLine(index);
            }
            ReadKey();
        }

        static int Maxima(int[] integers, out int[] indices)
        {
            indices = new int[1];
            int maxVal = integers[0];
            indices[0] = 0;
            int count = 1;
            for (int i = 1; i < integers.Length; i++)
            {
                if (integers[i] > maxVal)
                {
                    maxVal = integers[i];
                    count = 1;
                    indices = new int[1];
                    indices[0] = i;
                }
                else
                {
                    if (integers[i] == maxVal)
                    {
                        count++;
                        int[] oldIndices = indices;
                        indices = new int[count];
                        oldIndices.CopyTo(indices, 0);
                        indices[count - 1] = i;
                    }
                }
            }
            return maxVal;
        }
    }
}