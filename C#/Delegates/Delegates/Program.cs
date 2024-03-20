// -*- coding: utf-8 -*-

public delegate bool TwoIntsPredicate(int n1, int n2);

class Delegates
{
	static void Main(string[] args) {
		Random rd = new Random();
		int[] numbers = new int[15];
		for (int i = 0; i < numbers.Length; i++)
			numbers[i] = rd.Next(-100, 100);
		Console.Write("Initial array：");
		Array.ForEach(numbers, x => Console.Write($"{x} "));
		Console.WriteLine();
		
		//生成委托实例
		TwoIntsPredicate gt = GreaterThan;
		
		//对数值15，利用委托变量来判断该值是否为偶数
		Console.WriteLine($"Invoke gt with parameters 5 and 10： {gt(5, 10)}"); // [---a---]
		
		//利用委托，选出最大值
		int maxValue = ExtremeValue(numbers, GreaterThan);
		
		//输出结果
		Console.WriteLine($"The maximum value of array numbers is {maxValue}");
		
		//选出最大值的另一种写法：利用Lambda表达式
		TwoIntsPredicate gt2 = (x, y) => x > y;
		maxValue = ExtremeValue(numbers, gt2);
		Console.WriteLine($"Lambda: The maximum value of array numbers is {maxValue}");
		
		//模仿上面方法，写出选出最小值的两种写法

		//方法一：利用后文定义的函数

		//[---b---]
		TwoIntsPredicate lt = LesserThan;
		int minValue = ExtremeValue(numbers, lt);
		Console.WriteLine($"The minimum value of array numbers is {minValue}");
		//方法二：利用Lambda表达式
		//[---c---]
		TwoIntsPredicate lt2 = (x, y) => x < y;
		minValue = ExtremeValue(numbers, lt2);
		Console.WriteLine($"Lambda: The minimum value of array numbers is {minValue}");
			
		//模仿选出最大最小值等操作，请自行用lambda表达式创建一个委托
		//找出绝对值最大的数，例如 -99比88大
		//[---d---]
		TwoIntsPredicate absMax = (x, y) => Math.Abs(x) > Math.Abs(y);
		int greatestAbs = ExtremeValue(numbers, absMax);
		Console.WriteLine($"The maximum absolute value of array numbers is {greatestAbs}");

		//模仿上述操作，请自行创建一个函数DigitSumGreaterThan，
		//它将数值各数位和相加再进行比较，如79数位之和为16，比92的数位之和11大，
		//利用它找出数组中的极值
		//[---e---]
		TwoIntsPredicate digitsumGreaterThan = (x, y) => DigitSumGreaterThan(x, y);
		int digitSumMaxValue = ExtremeValue(numbers, digitsumGreaterThan);
		Console.WriteLine($"The greatest sum of digits of array numbers is {digitSumMaxValue}");
	}

	//判断是否大于
	private static bool GreaterThan(int n1, int n2)
	{
		return n1 > n2;
	}

	//判断是否小于
	private static bool LesserThan(int n1, int n2)
	{
		return n1 < n2;
	}

	private static bool DigitSumGreaterThan(int n1, int n2)
	{
		//[---f---]
		return DigitSum(n1) > DigitSum(n2);
	}

	private static int DigitSum(int n) {
		int sum = 0;
		if (n < 0)
		{
			n = -n;
		}
		while (n > 0)
		{
			sum += (n % 10);
			n /= 10;
		}
		return sum;
	}
	//从array数组中，根据predicate指定的规则，找出极值
	private static int ExtremeValue(int[] array, TwoIntsPredicate predicate)
	{
		//[---g---] 
		int extremeValue = array[0];
		foreach (var item in array)
		{
			if (predicate(item, extremeValue))
			{
				extremeValue = item;
			}
		} 
		return extremeValue;
	}
}
