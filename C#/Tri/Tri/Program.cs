for (int a = 102; a < 333; a++)
{
	int b = a * 2;
	int c = a * 3;
	string number = $"{a}{b}{c}";

	char[] chNumber = number.ToCharArray();
	Array.Sort(chNumber);
	number = new string(chNumber);
	if (number == "123456789")
	{
		Console.WriteLine($"{a}" + " " + $"{b}" + " "  + $"{c}");
	}
}