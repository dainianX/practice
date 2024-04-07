using System;

namespace ComplexNumbers
{
    internal class Program
    {
        public static bool TryParse(string s, out double real, out double image)
        {
            real = 0.0;
            image = 0.0;

            s = s.Trim();
            
            int signIndex = s.IndexOf('+');
            
            string realPart = s.Substring(0, signIndex);
            if (!double.TryParse(realPart, out real))
                return false;

            int iIndex = s.IndexOf('i');
            string imagPart = s.Substring(signIndex + 1, iIndex - signIndex - 1);

            if (!double.TryParse(imagPart, out image))
            {
                return false;
            }

            return true;
        }

        public static void Main(string[] args)
        {
            double real, image;
            bool ok = TryParse("2+3i", out real, out image);
            Console.WriteLine($"{ok}: {real} {image}");
        }
    }
}