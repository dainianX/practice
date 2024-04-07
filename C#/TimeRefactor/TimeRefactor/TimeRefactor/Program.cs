using System;

namespace Time
{
    public class Time
    {
        private int second;

        public int Hour
        {
            get => second / 3600 % 24;
            set
            {
                if (value < 0 || value > 24)
                {
                    throw new ArgumentOutOfRangeException(nameof(value), value,
                        $"{nameof(Hour)} must be 0 - 23");
                }

                second %= 3600;
                second += value * 3600;
            }
        }

        public int Minute
        {
            get => (second % 3600) / 60;
            set
            {
                if (value < 0 || value > 59)
                {
                    throw new ArgumentOutOfRangeException(nameof(value), value,
                        $"{nameof(Minute)} must be 0 - 59");
                }

                second -= (second % 3600);
                second += value * 60;
            }
        }
        public int Second
        {
            get => (second % 60);
            set
            {
                if (value < 0 || value > 59)
                {
                    throw new ArgumentOutOfRangeException(nameof(value), value,
                        $"{nameof(Second)} must be 0 - 59");
                }

                second -= (second % 60);
                second += value;
            }
        }

        public Time() : this(0, 0, 0) {}

        public Time(int hour = 0, int minute = 0, int second = 0)
        {
            Hour = hour;
            Minute = minute;
            Second = second;
        }

        public Time(Time t)
        {
            Hour = t.Hour;
            Minute = t.Minute;
            Second = t.Second;
        }
        public Time Next(int hour, int minute, int second)
        {
            int seconds = Hour * 3600 + Minute * 60 + Second;
            int totalSeconds = hour * 3600 + minute * 60 + second + seconds;
            int nextHour = totalSeconds / 3600 % 24;
            int nextMinute = totalSeconds % 3600 / 60;
            int nextSecond = totalSeconds % 60;
            return new Time(nextHour, nextMinute, nextSecond);
        }

        public string ToUniversalString()
        {
            return $"{Hour:D2}:{Minute:D2}:{Second:D2}";
        }

        public override string ToString()
        {
            string suffix = Hour >= 12 ? "PM" : "AM";
            int newHour = Hour == 0 || Hour == 12 ? 12 : Hour % 12;
            return $"{newHour:D2}:{Minute:D2}:{Second:D2} {suffix}";
        }
    }
    internal class Program
    {
        public static void Main(string[] args)
        {
            var t1 = new Time();
            var t2 = new Time(2);
            var t3 = new Time(21, 34);
            var t4 = new Time(12, 25, 42);
            var t5 = new Time(t4);
            t5.Hour = 15;
            var t6 = t5.Next(10, 40, 0);
            Console.WriteLine("t1:");
            Console.WriteLine(t1.ToUniversalString());
            Console.WriteLine(t1.ToString());
            Console.WriteLine("t2:");
            Console.WriteLine(t2.ToUniversalString());
            Console.WriteLine(t2.ToString());
            Console.WriteLine("t3:");
            Console.WriteLine(t3.ToUniversalString());
            Console.WriteLine(t3.ToString());
            Console.WriteLine("t4:");
            Console.WriteLine(t4.ToUniversalString());
            Console.WriteLine(t4.ToString());
            Console.WriteLine("t5:");
            Console.WriteLine(t5.ToUniversalString());
            Console.WriteLine(t5.ToString());
            Console.WriteLine("t6:");
            Console.WriteLine(t6.ToUniversalString());
            Console.WriteLine(t6.ToString());

        }
    }
}