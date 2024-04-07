using System;
using System.Text.RegularExpressions;
namespace IsPalindrome
{
    internal class Program
    {
        static bool IsPalindrome(string input, bool ignoreSpacesAndPunctuation = false)
        {
            int i, j;
            string output = input.ToLower();
            if (ignoreSpacesAndPunctuation)
            {
                output = Regex.Replace(output, @"[\s?!,.，。]", "");
            }
            for (i = 0,j = output.Length - 1; i < output.Length / 2; i++, j--)
            {
                if (output[i] != output[j])
                {
                    return false;
                }
            }
            return true;
        }
        public static void Main(string[] args)
        {
            string input1 = "Otto";
            string input2 = "ABCBX";
            string input3 = "柳庭风静人眠昼，昼眠人静风庭柳。";
            string input4 = "Was it a car or a cat I saw? ";
            
            Console.WriteLine(IsPalindrome(input1));
            Console.WriteLine(IsPalindrome(input2));
            Console.WriteLine(IsPalindrome(input3, true));
            Console.WriteLine(IsPalindrome(input4, true));
        }
    }
}